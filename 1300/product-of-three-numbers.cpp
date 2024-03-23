#include <iostream>
#include <vector>
#include <algorithm>
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
    set<int> used;

    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 && !used.count(i)) {
            used.insert(i);
            n /= i;
            break;
        }
    }
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0 && !used.count(i)) {
            used.insert(i);
            n /= i;
            break;
        }
    }

    if (int(used.size()) < 2 || used.count(n) || n == 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        used.insert(n);
        for (auto it : used) cout << it << ' ';
        cout << '\n';
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}