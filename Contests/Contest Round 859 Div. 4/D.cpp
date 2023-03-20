#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
#define display(n)
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 585;

void solve(int tc = 0) {

    cin >> n >> q;
    vector<int> a(n);
    vector<int> b(n);
    for (auto &x: a) cin >> x;
    b[0] = a[0];
    for (ll i = 1; i < n; ++i) {
        b[i] = a[i] + a[i - 1];
    }

    for (ll i = 0; i < q; ++i) {
        ll sum = 0;
        cin >> l >> r >> k;
        l--;

        // sum += (r - l) * k;
        sum += ((r - l) * k) + b[l] + (b[n-1] - b[r]);

        // for (ll i = 0; i < l; ++i) sum += a[i];
        // for (ll i = r; i < n; ++i) sum += a[i];

        cout << (sum % 2 != 0 ? "YES\n" : "NO\n");
    }    
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}