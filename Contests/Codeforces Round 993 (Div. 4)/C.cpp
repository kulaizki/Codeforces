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

void solve() {

    int m, a, b, c;
    cin >> m >> a >> b >> c;

    int n1 = m;
    int n2 = m;
    int ans = 0;

    if (a > n1) {
        ans += n1;
        n1 = 0; 
    } else {
        ans += a;
        n1 -= a;
    }

    if (b > n2) {
        ans += n2;
        n2 = 0;
    } else {
        ans += b;
        n2 -= b;
    }

    if (n1 + n2 > c) {
        ans += c;
    } else {
        ans += n1 + n2;
    }

    cout << ans << endl;
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}