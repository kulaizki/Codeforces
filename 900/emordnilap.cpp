#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ios ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {

    ios;

    const int N = 1e5 + 5;
    const ll mod = 1e9 + 7;
    vector<ll> fact(N);
    fact[0] = 1;
    for (int i = 1; i < N; ++i) {
        fact[i] = fact[i-1] * i;
        fact[i] %= mod;
    }

    int t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll ans = n * (n-1);
        ans %= mod;
        ans = (ans * fact[n]) % mod;
        cout << ans << '\n';
    }
}