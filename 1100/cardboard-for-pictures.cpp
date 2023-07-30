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

    ll n, c;
    cin >> n >> c;
    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll l = 1, r = 1e9;
    while (l <= r) {
        ll m = l + (r - l) / 2;
        ll area_sum = 0;
        for (ll i = 0; i < n; ++i) {
            area_sum += (a[i] + 2 * m) * (a[i] + 2 * m);
            if (area_sum > c) break;
        }
        if (area_sum == c) {
            cout << m << '\n';
            return;
        }

        (area_sum > c) ? r = m - 1 : l = m + 1;
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}