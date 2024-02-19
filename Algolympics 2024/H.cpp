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

    int n;
    cin >> n;

    vector<string> a(n);
    vector<string> b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int ha, ma, sa, hb, mb, sb;
    for (int i = 0; i < n; ++i) {
        ha = a[j][0] * 10 + a[j][1];
        ma = a[j][3] * 10 + a[j][4];
        sa = a[j][6] * 10 + a[j][7];
        for (int j = 0; j < n; ++j) {
            hb = b[j][0] * 10 + b[j][1];
            mb = b[j][3] * 10 + b[j][4];
            sb = b[j][6] * 10 + b[j][7];
        }
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}