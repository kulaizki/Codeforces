#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
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

void solve(int tc = 0) {

    int n;
    cin >> n;
    
    int m, cnt, digits;
    while (n) {
        m = n;
        cnt = 0;
        digits = 0;
        while (m) {
            int x = m % 10;
            if (x == 0 || x == 1) {
                cnt++;
            }
            digits++;
            m /= 10;
        }
        cout << cnt << ' ' << digits << '\n';
        if (cnt == digits) break;
        if (n % 11 != 0) {
            cout << "NO\n";
            return;
        }
        n /= 11;
    }

    cout << (n ? "YES" : "NO") << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}