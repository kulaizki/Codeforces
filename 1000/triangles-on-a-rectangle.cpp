#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int w, h;
    cin >> w >> h;

    ll ans = 0;
    for (int i = 0; i < 4; ++i) {
        int k;
        cin >> k;
        vector<ll> a;
        for (int j = 0; j < k; ++j) {
            int x;
            cin >> x;
            a.push_back(x);
        }
        ans = max(ans, (a[k-1] - a[0]) * (i < 2 ? h : w));
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}