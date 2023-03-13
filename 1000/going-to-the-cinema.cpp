#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;

    // gets the freq for each number
    vector<int> cnt(n+1);
    for (int i = 0; i < n; ++i) {
        int x; 
        cin >> x;
        cnt[x]++;
    }

    int ans = 0;
    int sum = 0;
    for (int k = 0; k <= n; ++k) {
        if (cnt[k] == 0 && sum == k) {
            ans++;
        }
        sum += cnt[k];
    }

    cout << ans << '\n';
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}