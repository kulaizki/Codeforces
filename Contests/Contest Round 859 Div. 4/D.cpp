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

    int s = 0;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        a[i] %= 2;
        s += a[i];
    }

    vector<int> p(n + 1);
    for (int i = 0; i < n; ++i) {
        p[i + 1] = p[i] + a[i];
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;
        l--;
        k %= 2;
        if ((p[l] + k * (r - l) + s - p[r]) % 2) {
            cout << "YES" << '\n';
        } else {
            cout << "NO" << '\n';
        }
    }
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}