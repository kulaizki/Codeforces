#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int mxn = 2e5 + 5;
ll a[mxn];

inline void solve() {

    ll n, m;
    cin >> n >> m;

    for (int i = 1; i <= n * m; ++i)
        cin >> a[i];

    sort(a + 1, a + n * m + 1);

    if (n > m) swap(n, m);
    if (n == 1) {
        cout << (m - 1) * (a[n * m] - a[1]) << '\n';
    } else {
        ll ans1 = (n * m - 1) * (a[n * m]) - a[1] * (n * (m - 1)) - a[2] * (n - 1);
        ll ans2 = a[n * m] * (n * (m - 1)) + a[n * m - 1] * (n - 1) - a[1] * (n * m - 1);
        cout << max(ans1, ans2) << '\n';
    }
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(0), cout.tie(0);
    int T;
    cin >> T;
    for (; T--;)
        solve();
    return 0;
}