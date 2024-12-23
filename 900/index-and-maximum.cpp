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

void solve() {

    int n, m;
    cin >> n >> m;

    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }

    int v = *max_element(a.begin(), a.end());

    for (int i = 0; i < m; ++i) {
        char c;
        int l, r;
        cin >> c >> l >> r;

        if (l <= v && v <= r) {
            if (c == '+') {
                v++;
            } else {
                v--;
            }
        }
        cout << v << (i == m - 1 ? '\n' : ' ');
    }
}

int main() {
    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
    return 0;
}