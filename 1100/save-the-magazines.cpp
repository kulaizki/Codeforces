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

    int n; cin >> n;
    string s; cin >> s;

    vector<ll> v(n);
    for (auto& x : v) cin >> x;

    ll ans = 0;
    if (s[0] == '1') ans = v[0];
    for (int i = 1; i < n; ++i) {
        if (s[i] == '1') {
            int mx = i;
            for (int j = i-1; j >= 0; --j) {
                if (s[j] == '0' && v[j] > v[mx]) {
                    mx = j;
                }
            }
            if (mx != i) {
                s[i] = '0';
                s[mx] = '1';
            }
            ans += v[mx];
        }
    }
    
    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}