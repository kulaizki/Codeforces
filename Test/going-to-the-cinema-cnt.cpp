#include <bits/stdc++.h>

using namespace std;

int i = 1;
void solve() {
    cout << '\n' << i << '\n';
    int n;
    cin >> n;

    // gets the frequency for each number
    vector<int> cnt(n+1);
    for (int i = 0; i < n; ++i) {
        int x; 
        cin >> x;
        cnt[x]++;
    }

    cout << "cnt: ";
    for (const auto& x: cnt) cout << x << ' ';
    cout << '\n';

    int ans = 0;
    int sum = 0;
    for (int k = 0; k <= n; ++k) {
        if (cnt[k] == 0 && sum == k) {
            ans++;
        }
        sum += cnt[k];
        cout << "sum: " << sum << '\n';
    }

    cout << "ans: " << ans << '\n';
    ++i;
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}
