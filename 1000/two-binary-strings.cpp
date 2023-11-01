#include <bits/stdc++.h>

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

    string s, t;
    cin >> s >> t;

    bool flag = false;    
    if (s == t) {
        flag = true;
    } else {
        string x = s;
        int i;
        for (i = s.size() - 2; i > 0 && s[i] != '0'; --i) {}
        while (i-- > 0) x[i] = '0';
        if (s == t) {
            flag = true;
        } else {
            // check others;
        }

    }

}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}