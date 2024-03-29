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
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (auto& n : v) {
        for (auto& x : n) cin >> x;
    }

    int cnt = 0;
    for (int i = 0; i < m-1; ++i) {
        vector<int> tmp;
        for (int j = 0; j < n-1; ++j)
            tmp.push_back(v[i][j]);
        sort(tmp.begin(), tmp.end());
        for (int j = 0; j < n-1; ++j) {
            cnt += i * tmp[i];
            cnt -= (n-i-1) * tmp[i];
        }
    }

    cout << cnt << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}