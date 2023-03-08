#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n, k;
    cin >> n >> k;

    int L = 0, R = 50;
    while (n--) {
        int l, r;
        cin >> l >> r;
        // checks if k is in between l and r
        if (l <= k && k <= r) {
            L = max(L, l), R = min(R, r);
        }
    }

    cout << (L == R ? "YES\n" : "NO\n" );
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}