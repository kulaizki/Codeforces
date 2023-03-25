#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
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

    int a = 0, b = 0;
    int ten = 1;
    int flag = 0;
    string k = to_string(n);
    int len = k.size();

    for (int i = 0; i < len; ++i) {
        int x = k[i] - '0';
        if (x % 2 == 0) {
            a *= 10;
            b *= 10;
            a += x / 2;
            b += x / 2;
        } else {
            if (!flag) {
                a *= 10;
                b *= 10;
                a += x / 2 + 1;
                b += x / 2;
            } else {
                a *= 10;
                b *= 10;
                a += x / 2;
                b += x / 2 + 1;
            }
            flag = 1 - flag;
        }
        n /= 10;
    }

    cout << a << ' ' << b << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}