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

    int n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;

    int u = 0, d = 0, l = 0, r = 0;

    for (int i = 0; i < k; ++i) {
        int xi, yi;
        cin >> xi >> yi;
        if (abs(xi - x - 1) + abs(yi - y) == 1) u = 1;
        if (abs(xi - x + 1) + abs(yi - y) == 1) d = 1;
        if (abs(xi - x) + abs(yi - y - 1) == 1) l = 1;
        if (abs(xi - x) + abs(yi - y + 1) == 1) r = 1;
    }

    cout << (k > 2 || (u + d + l + r) > 1 ? "NO\n" : "YES\n");
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}