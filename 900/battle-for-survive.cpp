#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back
#define all(a) a.begin(), a.end()

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

// const ll template_array_size = 1e6 + 777;
// const lld pi = 3.14159265358979323846;
// const ll MOD = 1'000'000'007;
// const ll MOD = 998'244'353;
// const MAX = 200'007;

void solve() {

    ll n;
    cin >> n;

    vector<ll> a(n);
    for (auto &x : a) cin >> x;

    ll ans = accumulate(all(a), 0LL) - 2 * a[n - 2];

    cout << ans << endl;
}

int main() {
    kulaizki
    int tc = 1;
    cin >> tc;
    while (tc--) solve();
}
