#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back
#define nl '\n'
#define v vector
#define all(v) v.begin(), v.end()

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

bool is_lucky(int n) {
    
    string s = to_string(n);
    for (char c : s) {
        if (c != '4' && c != '7') {
            return false;
        }
    }
    
    return true;
}

void solve(int tc = 0) {

    ll l, r;
    cin >> l >> r;

    v<bool> a(1e10 + 1);    
    for (ll i = 1; i <= 1e10; ++i) {
        a[i] = is_lucky(i);
    }

    ll sum = 0;
    for (ll i = l; i < r; ++i) {
        ll j;
        for (j = i; j <= 1e10 && a[j] == false; ++j) {}
        sum += j;
    }

    cout << sum << nl;
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}