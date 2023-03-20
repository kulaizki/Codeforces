#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;

void solve(int tc = 0) {

    int n, q;
    cin >> n >> q;
    vector<int> a(n);

    cin >> a[0];
    int sum = a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        a[i] += a[i-1];
    }


    for (int i = 0; i < q; ++i) {
        int l, r, k;
        cin >> l >> r >> k;
        
        int sum = 0;
        sum += (r - l) * k;
        sum += a[l];
        sum += a[n-1] - a[r];

        if (sum % 2) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
        
        for (const auto& x : a) cout << x << ' ';
        cout << "\nl: " << l << " r: " << r << " k: " << k << "\n";
        cout << "sum: " << sum << "\n";
        // for (ll i = 0; i < l; ++i) sum += a[i]; (not efficient enough)
        // for (ll i = r; i < n; ++i) sum += a[i];

        // cout << (sum % 2 != 0 ? "YES\n" : "NO\n");
    }    
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}