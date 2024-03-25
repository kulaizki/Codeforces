#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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

    vector<bool> prime(1e6 + 1, true);
    for (ll p = 2; p * p <= 1e6; ++p) {
        if (prime[p] == true) {
            for (ll i = p * p; i <= 1e6; i += p) {
                prime[i] = false;
            }
        }
    }
    set<ll> tprimes;
    for (ll p = 2; p <= 1e6; ++p) {
        if (prime[p]) {
            tprimes.insert(p * p);
        }
    }

    ll n;
    cin >> n;
    vector<ll> a(n);
    for (auto &x : a) {
        cin >> x;
        cout << (tprimes.find(x) != tprimes.end() ? "YES" : "NO") << '\n';
    }
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}