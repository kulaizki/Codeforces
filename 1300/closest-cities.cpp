#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

// const ll template_array_size = 1e6 + 777;
// const lld pi = 3.14159265358979323846;
// const ll MOD = 1'000'000'007;
// const ll MOD = 998'244'353;
// const MAX = 200'007;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    vector<int> b(n);
    b[0] = 0; b[1] = 1;
    for (int i = 2; i < n; ++i) {
        if (a[i] - a[i - 1] < a[i - 1] - a[i - 2]) {
            b[i] = b[i - 1] + 1;
        } else {
            b[i] = a[i] - a[i - 1] + b[i - 1];
        }
    }   

    vector<int> c(n);
    c[n - 1] = 0; c[n - 2] = 1;
    for (int i = n - 3; i >= 0; --i) {
        if (a[i + 1] - a[i] < a[i + 2] - a[i + 1]) {
            c[i] = c[i + 1] + 1;
        } else {
            c[i] = a[i + 1] - a[i] + c[i + 1];
        }
    }

    int m, x, y;
    cin >> m;
    for (int i = 0; i < m; ++i) {
        cin >> x;
        cin >> y;
        cout << (x < y ? b[y - 1] - b[x - 1] : c[y - 1] - c[x - 1]) << endl;
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}