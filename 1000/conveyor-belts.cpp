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

int layer(int n, int x, int y) {
    return min({x, y, n + 1 - x, n + 1 - y});
}

void solve(int tc = 0) {

    int n, x1, y1, x2, y2;
    cin >> n >> x1 >> y1 >> x2 >> y2;

    cout << abs(layer(n, x1, y1) - layer(n, x2, y2)) << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}