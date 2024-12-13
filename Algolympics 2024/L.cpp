#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

    vector<string> answers(11);
    vector<int> imposters;
    int regular = -1;

    int i;
    for (i = 1; i <= 11 && regular == -1; ++i) {
        cout << "QUERY " << i << " " << ((i == 1) ? 2 : 1) << endl;
        string first, second;
        cin >> first >> second;
        if (first == "NO") {
            regular = i;
        } else {
            answers[i] = second;
        }
    }

    if (regular != 1) {
        cout << "QUERY 1 " << regular << endl;
        string first, second;
        cin >> first >> second;
        if (second == "YES") {
            imposters.push_back(1);
            for (int j = 1; j < regular; ++j) {
                if (answers[j] == "YES") {
                    imposters.push_back(j);
                }
            }
        } else { // placeholder
            for (int j = 1; j < regular; ++j) {
                if (answers[j] == "YES") {
                    imposters.push_back(j);
                }
            }
        }
    }

    for (; i <= 20; ++i) {
        cout << "QUERY " << i << " " << regular << endl;
        string first, second;
        cin >> first >> second;
        if (second == "YES") {
            imposters.push_back(i);
        } 
    }

    cout << "ANSWER";
    for (const auto &x : imposters) {
        cout << " " << x;
    }

    cout << endl;
}