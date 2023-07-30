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
    
    int n, m, k;
    cin >> n >> m >> k;

    if ((n - 1ll) * n >> 1 < m || m < n - 1) {
        cout << "NO" << '\n';
        return;
    }

    if (n == 1 && k > 1) {
         cout << "YES\n";
    } else if (m < (n - 1ll) * n >> 1) {
        if (k > 3) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } else if (k > 2) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}