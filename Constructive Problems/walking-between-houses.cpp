#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 585;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;

void solve(int tc = 0) {

    ll s;
    cin >> n >> k >> s;

    if (!(k <= s && s <= k * (n - 1))) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    for (ll i = 0; i < k; ++i) a[i] = 1;
    ll x = s - k;

    for (ll i = 0; i < k; ++i) {
        ll v = min(n - 2, x);
        x -= v;
        a[i] += v;
    }

    ll cur = 1;
    for (ll i = 0; i < k; ++i) {
        if (i % 2 == 0) {
            cur += a[i]; // right
        } else {
            cur -= a[i]; // left
        }

        cout << cur << " ";
    }
}

int main() {

    activate mugen
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}
