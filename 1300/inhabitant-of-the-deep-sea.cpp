#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

// const ll template_array_size = 1e6 + 777;
// const lld pi = 3.14159265358979323846;
// const ll MOD = 1'000'000'007;
// const ll MOD = 998'244'353;
// const MAX = 200'007;

void solve() {

    ll n, k;
    cin >> n >> k;

    deque<ll> dq(n);
    for (int i = 0; i < n; ++i) {
        cin >> dq[i];
    }

    while (dq.size() > 1 && k) {
        int mn = min(dq.front(), dq.back());
        if (k < 2 * mn) {
            dq.front() -= k / 2 + k % 2;
            dq.back() -= k / 2;
            k = 0;
        } else {
            dq.front() -= mn;
            dq.back() -= mn;
            k -= 2 * mn;
        }
        if (dq.front() == 0) {
            dq.pop_front();
        }
        if (dq.back() == 0) {
            dq.pop_back();
        }
    }

    int ans = n - dq.size();
    cout << ans + (dq.size() && dq.front() <= k) << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}