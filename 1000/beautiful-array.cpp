#include <bits/stdc++.h>
using namespace std;

#define all(x) (x).begin(), (x).end()
#define ll long long
#define pub push_back
#define sz(x) (int)(x).size()

void solve() {

    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    vector<ll> a(n);
    a[0] = k * b;
    s -= k * b;

    if (s < 0) cout << "-1\n";
    else {
        for (int i = 0; i < n; ++i) {
            ll now = min(k-1, s);
            a[i] += now;
            s -= now;
        }
        if (s > 0) cout << "-1\n";
        else {
            for (const auto& x: a) cout << x << " ";
            cout << '\n';
        }
    }
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}