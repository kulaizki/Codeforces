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
const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n; cin >> n;

    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    vector<int> b(n);
    for (auto &x : b) cin >> x;
    sort(b.begin(), b.end(), greater<>());

    ll result = 1;
    for (int i = 0; i < n; ++i) {
        int geq_count = a.size() - (upper_bound(a.begin(), a.end(), b[i]) - a.begin());
        result = result * max(geq_count - i, 0) % mod;
    }

    cout << result << "\n";
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}