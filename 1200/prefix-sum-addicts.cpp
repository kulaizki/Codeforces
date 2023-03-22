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

    int n, k;
    cin >> n >> k;

    if (k == 1) {
        cout << "YES\n";
        return;
    }

    vector<ll> s(n + 1);
    for (int i = n - k + 1;  i <= n; ++i) {
        cin >> s[i];
    }
    vector<ll> a(n + 1);
    for (int i = n - k + 2; i <= n; ++i) {
        a[i] = s[i] - s[i - 1];
    }

    if (!is_sorted(a.begin() + n - k + 2, a.end())); {
        cout << "NO\n";
        return;
    }
    if (s[n - k + 1] > a[n - k + 2] * (n - k + 1)) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}