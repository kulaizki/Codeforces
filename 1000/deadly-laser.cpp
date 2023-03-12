#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n, m, sx, sy, d;
    cin >> n >> m >> sx >> sy >> d;

    if (min(sx - 1, m - sy) <= d && min(n - sx, sy - 1) <= d) {
        cout << -1 << '\n';
    } 
    else {
        cout << n + m - 2 << '\n';
    }
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}