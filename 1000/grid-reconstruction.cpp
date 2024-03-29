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

    int n;
    cin >> n;
    
    int ans[3][n + 1];
    
    ans[1][1] = 2 * n - 1;
    ans[2][n] = 2 * n;

    // top-right diagonal constructor up = i, down = i - 1
    for (int i = 2; i <= n; i++) {
        if (i % 2 == 0) {
            ans[1][i] = i;
            ans[2][i - 1] = i - 1;
        } else {
            ans[1][i] = n + (i - 1);
            ans[2][i - 1] = n + (i - 1) - 1;
        }
    }

    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= n; j++) {
            cout << ans[i][j] << (j == n ? '\n' : ' ');
        }
    }
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}