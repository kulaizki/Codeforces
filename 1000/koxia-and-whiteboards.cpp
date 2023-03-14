#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define ll long long


void solve() {

    int n, m;
    cin >> n >> m;

    vector<ll> a(n+m);
    for (auto& x: a) cin >> x;

    sort(a.begin(), a.end()-1);
    reverse(a.begin(), a.end());

    ll ans = 0;
    rep(i, n) ans += a[i];

    cout << ans << '\n';
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}