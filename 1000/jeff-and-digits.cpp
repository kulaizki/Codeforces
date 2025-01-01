#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

void solve() {

    int n;
    cin >> n;

    int f = 0; 
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        f += (x == 5); 
    }

    if (f == n) {
        cout << "-1\n"; 
    } else {
        string ans;
        int counter = f / 9 * 9; // closest multiple of 9
        while (counter--) ans += '5';
        if (!ans.empty()) { // avoid adding leading 0's
            int z = n - f - 1;
            while (z--) ans += '0'; // remaining zeroes
        }
        ans += '0'; // trailing zero 
        cout << ans << '\n';
    }
}

int main() {
    kulaizki
    int tc = 1;
    // cin >> tc; 
    for (int t = 0; t < tc; t++) solve();
    return 0;
}
