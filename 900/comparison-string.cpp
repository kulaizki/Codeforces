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

    int n; cin >> n;
    string s; cin >> s;

    int ans = 1, cur = 1;

    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            cur = 1;
        } else {
            cur++;
        }
        ans = max(ans, cur);
    }

    cout << ans + 1 << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}