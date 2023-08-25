#include <bits/stdc++.h>

using namespace std;

#define help {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
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

    char v[n][m]; 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            cin >> v[i][j];
        }
    }

    int idx[4] = {-1, -1, -1, -1};

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            if (idx[0] == -1 && v[j][i] == 'v') {
                idx[0] = i;
                j = n;
            } else if (idx[1] == -1 && v[j][i] == 'i') {
                idx[1] = i;
                j = n;
            } else if (idx[2] == -1 && v[j][i] == 'k') {
                idx[2] = i;
                j = n;
            } else if (idx[3] == -1 && v[j][i] == 'a') {
                idx[3] = i;
                j = n;
            }
        }
    }

    cout << (idx[0] != -1 && idx[1] != -1 && idx[2] != -1 && idx[3] != -1 && idx[0] < idx[1] && idx[1] < idx[2] && idx[2] < idx[3] ? "YES\n" : "NO\n");
    // cout << idx[0] << idx[1] << idx[2] << idx[3] << '\n';
}

int main() {

    help
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}