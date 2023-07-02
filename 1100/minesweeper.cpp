#include <bits/stdc++.h>

using namespace std;

int main() {

    int n, m;
    cin >> n >> m;
    vector<vector<char>> field(n, vector<char>(m));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> field[i][j];
        }
    }

    bool valid = true;
    for (int i = 0; i < n && valid; ++i) {
        for (int j = 0; j < m && valid; ++j) {
            if (field[i][j] == '.') {
                for (int dx = -1; dx <= 1; ++dx) {
                    for (int dy = -1; dy <= 1; ++dy) {
                        int nx = i + dx;
                        int ny = j + dy;
                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] == '*') {
                            valid = false;
                            break;
                        }
                    }

                    if (!valid) {
                        break;
                    }
                }
            } else if (field[i][j] >= '1' && field[i][j] <= '8') {
                int k = field[i][j] - '0';
                int bombs = 0;
                for (int dx = -1; dx <= 1; ++dx) {
                    for (int dy = -1; dy <= 1; ++dy) {
                        int nx = i + dx;
                        int ny = j + dy;

                        if (nx >= 0 && nx < n && ny >= 0 && ny < m && field[nx][ny] == '*') {
                            bombs++;
                        }
                    }
                }

                if (bombs != k) {
                    valid = false;
                }
            }
        }
    }

    cout << (valid ? "YES" : "NO");
}