#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    ll n, k, q;
    cin >> n >> k >> q;

    ll a[n], ans = 0, len = 0;

    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    for (const auto & x : a) {
        if (x <= q) {
            len++;
        } else {
            if (len >= k) {
                ans += (len - k + 1) * (len - k + 2) / 2;
            }
            len = 0;
        }
    }

    if (len >=  k) {
        ans += (len - k + 1) * (len - k  + 2) / 2;
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}