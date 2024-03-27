#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>
 
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
 
    int a, b, c;
    cin >> a >> b;
    c = a + b;
    string as, bs, cs;
    as = to_string(a);
    bs = to_string(b);
    cs = to_string(c);
    as.erase(remove(as.begin(), as.end(), '0'), as.end());
    bs.erase(remove(bs.begin(), bs.end(), '0'), bs.end());
    cs.erase(remove(cs.begin(), cs.end(), '0'), cs.end());
    a = stoi(as);
    b = stoi(bs);
    c = stoi(cs);

    cout << (a + b == c ? "YES" : "NO") << '\n';
}
 
int main() {
 
    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}