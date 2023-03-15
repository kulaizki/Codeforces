#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& x: a) cin >> x;
    sort(a.begin(), a.end());

    vector<int> b(n);
    b[0] = 1;
    for (int i = 1; i < n; ++i) {
        b[i] = min(b[i - 1] + 1, a[i]);
    }

    ll ans = 0;
    for (int i = 0; i < n; ++i) {
        ans += a[i] - b[i];
        cout << "a[i] " << a[i] << "\n";
        cout << "b[i] " << b[i] << "\n\n";
    }

    cout << ans << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}