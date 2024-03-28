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

void solve(int tc = 0) {

    int n;
    cin >> n;

    int a[24][60] = {0};
    int cash = 0;
    for (int i = 0; i < n; ++i) {
        int x, y;
        cin >> x >> y;
        a[x][y]++;
    }

    pair<int, int> mp = {0, 0};
    for (int i = 0; i < 24; ++i) {
        for (int j = 0; j < 60; ++j) {
            if (a[i][j] > a[mp.first][mp.second]) {
                mp.first = i;
                mp.second = j;
            }
        }
    }

    cout << a[mp.first][mp.second];
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}