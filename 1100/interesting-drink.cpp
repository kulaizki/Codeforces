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
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    int q;
    cin >> q;
    vector<int> b(q);
    for (auto &x : b) cin >> x;

    for (int i = 0; i < q; ++i) {
        int l = 0, m, r = a.size();
        while (l < r) {
            m = (l + r) / 2;
            if (a[m] <= b[i]) l = m + 1;
            else r = m;
        }
        cout << (l > 0 ? l : 0) << '\n';
    }
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}