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

    int n, l = 0, c;
    cin >> n;

    pair<int, int> s[110];
    int d[110];
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            c = 0;
            while (n % i == 0) {
                c++;
                n /= i;
            }
            s[++l] = make_pair(c, i);
        }
    }

    if (n != 1) {
        s[++l] = make_pair(1, n);
    } 
    sort(s + 1, s + l + 1);
    d[l + 1] = 1;
    for (int i = l; i >= 1; --i) {
        d[i] = d[i + 1] * s[i].second;
    }
    int ans = 0;
    for (int i = 1; i <= l; ++i) {
        if (s[i].first != s[i - 1].first) {
            ans += d[i] * (s[i].first - s[i - 1].first);
        }
    }

    cout << ans <<'\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}