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

    string s;
    cin >> s;

    int ans = 200001;
    int n = s.size();

    vector<pair<char, int>> c;
    for (const auto &x : s) {
        if (c.empty() || c.back().first != x) {
            c.push_back(make_pair(x, 1));
        } else {
            c.back().second++;
        }
    }

    int m = c.size();
    for (int i = 1; i < m - 1; ++i) {
        if (c[i - 1].first != c[i + 1].first) {
            ans = min(c[i].second + 2, ans);
        }
    }

    cout << (ans > n ? 0 : ans) << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}