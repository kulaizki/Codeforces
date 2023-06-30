#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<char>> v(n, vector<char>(m));

    for (auto &i : v) {
        for (auto &j : i) {
            cin >> j;
        }
    }

    int ans = 0;
    for (int i = 0; i < n && ans != 1; ++i) {
        for (int j = 0; j < m && ans != 1; ++j) {
            if (v[n][m] == '*') {

            } else if (v[n][m] == '.') {

            } else {
                int bombs = 0;
                while ()
            }
        }
    }

    cout << (ans == 0) ? "YES" : "NO";
}