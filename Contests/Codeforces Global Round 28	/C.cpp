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

    string s;
    cin >> s;

    int n = s.size();
    int x;
    // get first occurence of '0'
    for (x = 0; x < n && s[x] == '1'; ++x) {}

    if (x == n) x = n - 1;

    int k = x - 1;
    int j = 0;
    // find first 101
    for (j = x; j < n && k >= 0 && s[j] == '0'; ++j, --k) {}

    ++k;
    cout << "1 " << n << ' ' << k + 1 << ' ' << k + n - x << endl;
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}