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

    bool a[5] = {0};
    for (int i = 0; i < 4; ++i) {
        int x;
        cin >> x;
        a[x - 1] = 1;
    }

    for (int i = 0; i < 5; ++i) {
        if (a[i] == 0) {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}