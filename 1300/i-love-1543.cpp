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
    int n, m;
    cin >> n >> m;

    vector<string> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i]; 
    }

    int ans = 0;
    for (int i = 0; (i + 1) * 2 <= n && (i + 1) * 2 <= m; ++i) {
        int pos = 0;
        vector<char> layer; 

        // top of layer
        for (int j = i; j < m - i; ++j) layer.push_back(a[i][j]);

        // right of layer
        for (int j = i + 1; j < n - i - 1; ++j) layer.push_back(a[j][m - i - 1]);

        // bottom of layer
        for (int j = m - i - 1; j >= i; --j) layer.push_back(a[n - i - 1][j]);

        // left of layer
        for (int j = n - i - 2; j >= i + 1; --j) layer.push_back(a[j][i]);

        for (int j = 0; j < layer.size(); ++j) {
            if (layer[j] == '1' &&
                layer[(j + 1) % layer.size()] == '5' &&
                layer[(j + 2) % layer.size()] == '4' &&
                layer[(j + 3) % layer.size()] == '3') {
                ans++;
            }
        }
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}