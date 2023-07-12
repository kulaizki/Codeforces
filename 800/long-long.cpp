#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
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

    ll a[n], sum = 0, cnt = 0;
    bool open = false;

    for (auto &x : a) cin >> x;

    for (const auto &x : a) {
        sum += abs(x);
        if (x < 0 && !open) {
            open = true;
            cnt++;
        }
        if (x > 0) {
            open = false;
        }
    }

    cout << sum << ' ' << cnt << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}