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

    map<int, int> mp;
    vector<int> v[n];
    for (int i = 0; i < n; ++i) {
        int m;
        cin >> m;

        v[i].resize(m);
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
            mp[v[i][j]]++;
        }
    }

    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        bool f = true;
        for (int j = 0; j < v[i].size(); ++j) {
            if (mp[v[i][j]] == 1) {
                if (f) {
                    ans.push_back(v[i][j]);
                    f = false;
                }
            }
            mp[v[i][j]]--;
        }
    }

    if (ans.size() != n) {
        cout << -1;
    } else {
        for (const auto& x : ans) cout << x << ' ';
    }

    cout << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}