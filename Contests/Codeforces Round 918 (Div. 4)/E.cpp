#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.141592653589793238462;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    ll n;
    cin >> n;

    vector<ll> v(n + 1);
    for (ll i = 1; i <= n; ++i) cin >> v[i];

    unordered_map<ll, ll> diff;
    ll a = 0, b = 0;
    string ans = "NO";

    for (ll i = 1; i <= n; ++i) {
        if (i & 1) {
            b += v[i];
        } else {
            a += v[i];
        }
        ll curr_diff = b - a;
        if (curr_diff == 0 || diff.find(curr_diff) != diff.end()) {
            ans = "YES";
            break;
        }
        diff[curr_diff] = 1;
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}