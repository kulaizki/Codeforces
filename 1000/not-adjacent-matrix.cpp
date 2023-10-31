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

    if (n == 1) {
        cout << "1\n";
    } else if (n == 2) {
        cout << "-1\n";
    } else {
        vector<vector<int>> a(n, vector<int>(n));
        a[0][0] = 1;
        a[n - 1][n - 1] = n * n;
        int x = n * n - 1;
        for (int i = 1; i + 1 < n; ++i) {
            for (int j = i; j >= 0; --j, --x) {
                a[i -  j][j] = x;
            }
        }
        x = 2;
        for (int j = n - 2; j > 0; --j) {
            for (int i = 0; i < n - j; ++i, ++x) {
                a[n - i -1][j + i] = x;
            }
        }
        for (int i = n - 1; i >= 0; --i, ++x) {
            a[i][n - i -1] = x;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cout << a[i][j] << ' ';
            }
            cout << '\n';
        }
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}