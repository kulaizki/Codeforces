#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

vector<int> lis[200001];
int vis[200001];
int dfsVis[200001];

bool checkCycle(int node) {

    vis[node] = 1;
    dfsVis[node] = 1;
    for (auto it : lis[node]) {
        if (!vis[it]) {
            if (checkCycle(it))
                return true;
        }
        else if (dfsVis[it]) {
            return true;
        }
    }
    dfsVis[node] = 0;

    return false;
}

void solve(int tc = 0) {

    int n, k;
    cin >> n >> k;

    for (int i = 0; i <= n; i++) {
        lis[i].clear();
        vis[i] = 0;
        dfsVis[i] = 0;
    }

    for (int i = 0; i < k; i++) {
        vector<int> v(n);
        for (int j = 0; j < n; j++) {
            cin >> v[j];
        }
        for (int j = 2; j < n; j++) {
            lis[v[j - 1]].push_back(v[j]);
        }
    }

    bool flag = false;
    for (int i = 1; i <= n; i++) {
        if (vis[i] == 0) {
            if(checkCycle(i)) {
                flag = true;
                break;
            }
        }
    }

    cout << (flag ? "NO" : "YES") << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}