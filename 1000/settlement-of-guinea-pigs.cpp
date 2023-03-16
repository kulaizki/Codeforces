#include <bits/stdc++.h>

using namespace std;

#define ll long long

void solve() {

    int n;
    cin >> n;

    int known = 0, unknown = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        if (x == 1) {
            ++unknown;
        }
        else {
            known += unknown;
            unknown = 0;
        }
        ans = max(ans, unknown + (known ? known / 2 + 1 : 0));
    }

    cout << ans << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}