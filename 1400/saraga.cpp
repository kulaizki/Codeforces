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

    string s, t;
    cin >> s >> t;

    int a[26] = {0};
    for (int i = 1; i <  s.size(); ++i) {
        if (a[s[i] - 'a'] > 0) continue;
        a[s[i] - 'a'] = i;
    }

    string ans = "-1";
    bool found = false;

    for (int i = t.size() - 2; i >= 0; --i) {
        if (a[t[i] - 'a'] <= 0) continue;
        int len = a[t[i] - 'a'] + t.size() - i;
        if (!found || len < ans.size()) {
            found = true;
            ans = s.substr(0, a[t[i] - 'a']) + t.substr(i);
        }
    }

    cout << ans << endl;
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}