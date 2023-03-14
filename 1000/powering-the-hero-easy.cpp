#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define pub push_back
#define pob pop_back
#define sz(x) (int)(x).size()

void solve() {

    int n;
    cin >> n;

    vector<ll> a(n);
    for (auto& x: a) cin >> x;

    ll ans = 0;
    vector<ll> b(n, 0);
    for (auto& x: a) {
        if (x > 0) {
            b.pub(x);
            int j = sz(b)-1;
            while (b[j] < b[j-1]) {
                swap(b[j], b[j-1]);
                j--;
            }
        }
        else {
            ans += b.back();
            b.pob();
        }
    }

    cout << ans << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}