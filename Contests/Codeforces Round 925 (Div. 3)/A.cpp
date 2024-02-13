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
    int n;
    cin >> n;

    int cnt = 0;
    while (n >= 28) {
        n -= 26;
        cnt++;
    }

    string s;    
    if (cnt == 1) {
        s[2] = 'z';
        s[1] = char('a' + n - 2);
        s[0] = 'a';
    } else if (cnt == 2) {
        s[2] = 'z';
        s[1] = 'z';
        s[0] = char('a' + n - 1);
    } else if (cnt == 0) {
        s[2] = char('a' + n - 3);
        s[1] = 'a';
        s[0] = 'a';
    }

    for (int i = 0; i < 3; ++i) {
        cout << s[i];
    }

    cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}