#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

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

    string s;
    cin >> s;

    bool flag = 1;
    for (int i = 0; i < s.size() && flag; ++i) {
        if (s[i] != '4' && s[i] != '7') {
            flag = 0;
        }
    }

    int x = atoi(s.c_str());
    if (x % 4 == 0 || x % 7 == 0 || x % 47 == 0) {
        flag = 1;
    }

    cout << (flag ? "YES\n" : "NO\n");
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}