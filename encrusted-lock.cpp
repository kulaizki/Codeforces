#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0); cin.tie(0);

    int col, row;
    cin >> col >> row;

    int pattern[col];
    for (int i = 0; i < col; ++i) cin >> pattern[i];

    int dirt[col];
    for (int i = 0; i < col; ++i) cin >> dirt[i];

    int keys[row][col];
    for (int i = 0; i < row; ++i)
    {
        for (int j = 0; j < col; ++j)
        {
            cin >> keys[i][j];
        }
    }

    for (int i = 0; i < row; ++i)
    {
        int j;
        for (j = 0; j < col && (keys[i][j] <= pattern[j] && keys[i][j]+dirt[j] >= pattern[j]); ++j) {}
        (j == col) ? cout << "SUS\n" : cout << "INNOCENT\n";
    }
}