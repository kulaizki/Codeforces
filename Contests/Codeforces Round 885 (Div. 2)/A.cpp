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

    bool valid = true;
    for (int i = 0; i < k; ++i) {
        int xi, yi;
        cin >> xi >> yi;
        int dx = abs(x - xi);
        int dy = abs(y - yi);
        if ((dx + dy) % 2 == 0) {
            valid = false;
        }
    }

    cout << (valid ? "YES\n" : "NO\n");
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}