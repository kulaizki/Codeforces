#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' '; cout << '\n';}
typedef long long ll;
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

    vector<int> b(n - 1), a;
    for (auto &x : b) cin >> x;

    a.emplace_back(b[0]);
    for (int i = 0; i < n - 2; ++i) {
        a.emplace_back(min(b[i], b[i + 1]));
    }
    a.emplace_back(b[n - 2]);

    poof(a);
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}