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

    int n, m;
    cin >> n >> m;

    ll x, n_sum = 0, m_sum = 0;

    for (int i = 0; i < n; ++i) {
        cin >> x;
        n_sum += x;
    }

    for (int i = 0; i < m; ++i) {
        cin >> x;
        m_sum += x;
    }

    cout << (n_sum == m_sum ? "Draw" : (n_sum > m_sum ? "Tsondu" : "Tenzing")) << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}