#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
 
int main() {

    vector<bool> irregular(21, false);
    vector<bool> geniuses(21, false);
    vector<int> imposters;
    int x = 1, y = 2, regular = -1;
    string first, second;   

    while (regular == -1) {
        cout << "QUERY " << x << " " << y << endl;
        cin >> first >> second;
        if (first == "NO") {
            regular = x;
        } else if (second == "NO") {
            geniuses[x] = true;
        } else {
            irregular[x] = true;
        }
        x++; y++;
    }

    for (int i = 1; i <= 20; ++i) {
        if (irregular[i] && !geniuses[i]) {
            cout << "QUERY " << i << " " << regular << endl;
            cin >> first >> second;
            if (second == "YES") {
                imposters.push_back(i);
                irregular[i] = true;
            };
        }
    }

    cout << "ANSWER";
    for (const auto& sus : imposters) {
        cout << " " << sus;
    }

    cout << endl;
    // while (regular < 1 && genius < 1 && count < 21) {
    //     cout << "QUERY " << x << " " << y << endl;
    //     count++;
    //     cin >> first >> second;
    //     if (first == "NO") {
    //         regular = x;
    //         x = 1;
    //     } else if (first == "YES" && second == "NO") {
    //         genius = x;
    //         regular = y;
    //         y = 1;
    //     } else {
    //         x = ((y + 345) % 20) + 1;
    //         y = ((x + 2) % 20) + 1;
    //     }
    // }

}