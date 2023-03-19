#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {

    ll x, y;
    cin >> x >> y;
    ll n = 2 * (x - y);
    cout << n << "\n";

    vector<ll> a(n);
    int ptr = 0;

    // traverse from y to x
    for (ll c = y; c <= x; ++c) {
        a[ptr++] = c;
    }
    // traverse from x - 1 to y - 1
    for (ll c = x - 1; c > y; --c) {
        a[ptr++] = c;
    }
    
    for (int i = 0; i < n; ++i) {
        cout << a[i] << " \n"[i == n - 1];
    }
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}