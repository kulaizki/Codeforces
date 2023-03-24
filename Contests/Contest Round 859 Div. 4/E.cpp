#include <bits/stdc++.h>

using namespace std;
#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;

void solve(int tc = 0) {

    // in progress (interactive problem practice)
    ll n, q;
    cin >> n >> q;

    vector<ll> a(2000005);
    vector<ll> p(2000005);
    for(ll i = 1; i <= n;++i){
        cin >> a[i];
        p[i] = p[i - 1] + a[i];
    }

    ll l = 1, r = n, ans = 0;
    while (l <= r) {
        ll m = (l + r) / 2;
        cout << "? " << (m - l + 1) << ' ';
        for (ll i = l; i <= m; ++i) {
            cout << i << ' ';
        }
        cout << endl << flush;
        ll x = 0;
        cin >> x;
        if (x == p[m] - p[l - 1]) {
            l = m + 1;
        } else {
            r = m - 1;
            ans = m;
        }
    }

    cout << "! " << ans << endl << flush;
}

int main() {

    activate mugen
    ll tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}