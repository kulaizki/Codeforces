#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n;
    cin >> n;

    vector<ll> v;
    ll ans = 0;
    ll mn = 1e9 + 1;
    for (int i = 0; i < n; ++i) {
        ll m;
        cin >> m;
        vector<int> vi(m);
        for (auto &x : vi) cin >> x;
        sort(vi.begin(), vi.end());
        if (m == 1) {
            ans += vi[0];
        } else {
            ll x = vi[0];
            v.push_back(vi[1]);
            mn = min(mn, x);
        }
    }

    ans += mn;
    sort(v.begin(), v.end());
    for (int i = 1; i < v.size(); ++i) {
        ans += v[i];
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}