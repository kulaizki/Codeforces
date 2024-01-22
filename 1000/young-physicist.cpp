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

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n;
    cin >> n;

    int x = 0, y = 0, z = 0;
    for (int i = 0; i < n; ++i) {
        int a, b, c;
        cin >> a; x += a;
        cin >> b; y += b;
        cin >> c; z += c;
    }

    cout << ((x == 0 && y == 0 && z == 0) ? "YES\n" : "NO\n");
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}