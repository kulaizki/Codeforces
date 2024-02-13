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

    int a[n];
    for (auto &x : a) cin >> x;

    int i, j;
    for (i = 0; i < n && a[i] == a[0]; ++i) {}
    for (j = n - 1; j >= 0 && a[j] == a[n - 1]; --j) {}

    int ans;
    if (n == 1) {
        ans = 0;
    } else if (a[0] != a[n - 1]) {
        ans = min(n - i, j + 1);
    } else {
        ans = max(0, j - i + 1);
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}