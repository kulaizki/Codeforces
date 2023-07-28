#include <bits/stdc++.h>

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

    int n, k, d, w;
    cin >> n >> k >> d >> w;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    int s = -1;
    int dose = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        if (v[i] <= s + d && dose > 0) {
            dose--;
        }
        else {
            s = v[i] + w;
            dose = k - 1;
            ans++;
        }
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}