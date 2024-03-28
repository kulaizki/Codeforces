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

    int one = 0, two = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if(x == 100) {
            one++;
        } else {
            two++;
        }
        sum += x;
    }

    if (sum / 100 & 1 || n == 1) {
        cout << "NO\n";
    } else {
        if (!(one & 1) && two & 1 && one) {
            cout << "YES\n";
        } else if (one == two || !(one &1 ) && !(two & 1)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}