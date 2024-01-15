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

    vector<ll> charges(n);
    for (int i = 0; i < n; ++i) {
        cin >> charges[i];
    }

    ll maxCharge = *max_element(charges.begin(), charges.end());
    ll sum = accumulate(charges.begin(), charges.end(), 0LL);

    ll remainingCharge;
    if (sum % 2 == 1 && maxCharge > 0) {
        remainingCharge = sum - 2 * maxCharge;
    } else {
        remainingCharge = sum;
    }

    cout << remainingCharge << '\n';
}


int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}