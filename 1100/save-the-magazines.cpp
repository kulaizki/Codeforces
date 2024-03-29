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
    string s = "0", t;
    cin >> t;
    s += t;

    vector<ll> v(n+1);
    v[0] = 0;
    for (int i = 1; i <= n; ++i) {
        cin >> v[i];
    }

    ll ans = 0;
    int i = 0;
    while (i <= n) {
        ll mn = v[i];
        ll sm = v[i];
        int j = i+1;
        while (j <= n && s[j] == '1') {
            mn = min(mn, v[j]);
            sm += v[j];
            j++;
        }
        ans += sm - mn;
        i = j;
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}