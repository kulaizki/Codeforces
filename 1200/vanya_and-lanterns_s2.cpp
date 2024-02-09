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

    int n, l, r;
    cin >> n >> l;

    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n);

    r = max(a[0], l - a[n - 1]) * 2;
    for (int i = 1; i < n; ++i) {
        r = max(r, a[i] - a[i - 1]);
    }

    cout.precision(20);
    cout << fixed << r / 2.0 << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}

