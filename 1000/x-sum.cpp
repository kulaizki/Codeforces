#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n, m;
    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> a[i][j];
        }
    }

    int mx = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            int curr_mx = 0;
            int ci = i, cj = j;

            while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                curr_mx += a[ci][cj];
                ci--; cj--;
            }

            ci = i; cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                curr_mx += a[ci][cj];
                ci++; cj--;
            }

            ci = i; cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                curr_mx += a[ci][cj];
                ci--; cj++;
            }

            ci = i; cj = j;
            while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
                curr_mx += a[ci][cj];
                ci++; cj++;
            }

            curr_mx -= a[i][j]*3;
            mx = max(curr_mx, mx);
        }
    }

    cout << mx << '\n';
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}