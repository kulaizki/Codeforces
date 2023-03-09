#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        bool red = false;
        for (int i = 0; i < 8; ++i) {
            string s;
            cin >> s;
            if (s == "RRRRRRRR") {
                red = true;
            }
        }

        cout << (red ? "R\n" : "B\n");
    }
}