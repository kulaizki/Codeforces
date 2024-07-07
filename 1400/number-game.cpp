#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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

void solve() {

    int n;
    cin >> n;
    vector<int> a(n);
    for (int& x : a) cin >> x;

    int ans = 0;
    for (int k = 1; k <= n; ++k) {
        multiset<int> s(a.begin(), a.end());
        for (int i = 0; i < k; ++i) {
            auto it = s.upper_bound(k - i);
            if (it == s.begin()) break;
            s.erase(--it);
            if (!s.empty()) {
                int x = *s.begin();
                s.erase(s.begin());
                s.insert(x + k - i);
            }
        }
        if (s.size() + k == n) ans = k;
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}