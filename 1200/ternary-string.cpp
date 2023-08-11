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

void solve(int tc = 0) {

    string s;
    cin >> s;

    int ans = 200001;
    bool e[3];
    for (int i = 0; i < s.size(); ++i) {
        e[0] = false;
        e[1] = false;
        e[2] = false;
        for (int j = i; j < s.size(); ++j) {
            if (s[j] == '1') {
                e[0] = true;
            } else if (s[j] == '2') {
                e[1] = true;
            } else {
                e[2] = true;
            }
        }
        if (e[0] == 1 && e[1] == 1 && e[2] == 1) {
            ans = min((int)s.size() - i, ans);
        }
    }

    cout << (ans == 200001 ? '0' : ans) << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}