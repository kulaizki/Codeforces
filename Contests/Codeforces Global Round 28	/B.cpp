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

    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    int j = 1;
    for (int i = k - 1; i < n; i += k, ++j) {
        a[i] = j; // put min in all subarrays
    }

    for (int i = 0; i < n; ++i) {
        if ((i + 1) % k) {
            a[i] = j++;
        }
    }

    for (const auto x : a) cout << x << ' ';

    cout << endl;
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}