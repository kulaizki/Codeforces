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

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    unordered_map<int, int> cnt;
    for (auto& x : a) {
        cin >> x;
        cnt[x]++;
    }

    int u = 0;
    int d = 0;
    for (const auto& [k, v] : cnt) {
        if (v == 1) {
            u++;
        } else {
            d++;
        }
    }

    cout << 2 * ((u + 1) / 2) + d << endl;
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}