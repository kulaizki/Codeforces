#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

// const ll template_array_size = 1e6 + 777;
// const lld pi = 3.14159265358979323846;
// const ll MOD = 1'000'000'007;
// const ll MOD = 998'244'353;
// const MAX = 200'007;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& x : a) cin >> x;

    for (int i = 0; i < n - 1; ++i) {
        int x = abs(a[i] - a[i + 1]);
        if (x != 5 && x != 7) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}