#include <iostream>
#include <unordered_map>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n, m;
    cin >> n >> m;

    unordered_map<char, int> mp;
    for (int i = 0; i < n; ++i) {
        char level;
        cin >> level;
        mp[level]++;
    }

    int ans = 0;
    while (m--) {
        mp['A']--; if (mp['A'] < 0) ans++;
        mp['B']--; if (mp['B'] < 0) ans++;
        mp['C']--; if (mp['C'] < 0) ans++;
        mp['D']--; if (mp['D'] < 0) ans++;
        mp['E']--; if (mp['E'] < 0) ans++;
        mp['F']--; if (mp['F'] < 0) ans++;
        mp['G']--; if (mp['G'] < 0) ans++;
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}