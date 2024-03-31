#include <iostream>
#include <vector>
#include <algorithm>

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

    int n;
    cin >> n;

    vector<ll> a(n), b(n + 1, 0), x, y(n + 1, 0);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        b[i + 1] = b[i] + a[i];
    }
    x = a;
    sort(x.begin(), x.end());   
    for (int i = 0; i < n; ++i) {
        y[i + 1] = y[i] + x[i];
    }

    int m;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        int t, l, r;
        cin >> t >> l >> r;
        if (t == 1) {
            cout << b[r] - b[l - 1];
        } else {
            cout << y[r] - y[l - 1];
        }
        cout << '\n';
    }
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}