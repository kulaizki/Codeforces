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

    ll n;
    cin >> n;

    vector<ll> v(n);
    ll mx_idx = 0;
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        if (v[i] > v[mx_idx]) mx_idx = i;
    }

    if (!is_sorted(v.begin(), v.end())) {
        for (int i = 0; i < n; ++i) {
            if (mx_idx == n - 1 || v[mx_idx] <= v[mx_idx + 1] || v[mx_idx + 1] == 0) {
                v[mx_idx] = 0;
                for (int j = 0; j < n; ++j) {
                    if (v[j] > v[mx_idx]) mx_idx = j;
                }
            }
        }
        cout << v[mx_idx] << '\n';
    } else {
        cout << '0' << '\n';
    }

    // cout << "poof: "; poof(v) cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}