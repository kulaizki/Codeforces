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
    for (int i = 0; i < n && ans == 0; ++i) {
        for (int j = 0; j < m && ans == 0; ++j) {
            if (v[i][j] == '.') {
                if (i > 0 && j > 0 && i <  n - 1 && j < m - 1) {
                    if (v[i - 1][j - 1] == '*' || v[i - 1][j] == '*' || 
                        v[i - 1][j + 1] == '*' || v[i][j - 1] == '*' ||
                        v[i][j + 1] == '*' || v[i + 1][j - 1] == '*' ||
                        v[i + 1][j] == '*' || v[i + 1][j + 1] == '*') {
                            ans = 1;
                    }
                }
            } else if (v[i][j] != '*') {
                // for (int k = 0; k < 8; k++) {

                // }
            }
        }
    }

    cout << (ans == 0 ? "YES" : "NO");
}