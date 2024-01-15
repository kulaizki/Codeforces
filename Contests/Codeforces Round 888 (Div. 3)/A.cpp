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

    int n, m, k, H;
    cin >> n >> m >> k >> H;

    int ans = 0;
    for (int x = 0; x < n; ++x) {
        int h;
        cin >> h;
        for (int y = 1; y <= m; ++y) {
            for (int z = 2; z <= m; ++z) {
                if (y != z) {
                    if (abs(H - h) == k * abs(y - z)) {
                        ans++;
                        y = m + 1;
                        break;
                    }
                }
            }
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