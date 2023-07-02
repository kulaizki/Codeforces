#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    string l, r, x;
    cin >> l >> r;

    x = string(r.size() - l.size(), '0') + l;
    

    int ans = 0;

    if (l == r) {
        cout << ans << '\n';
    } else {
        int i = 0;
        for (; x[i] == r[i]; ++i) {}
        int remainder = abs((r[i] - 48) - (x[i] - 48));
        ans = (r.size() - i - 1) * 9 + remainder;
        cout << ans << '\n';
    }

}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}