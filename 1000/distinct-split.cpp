#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n; cin >> n; string s; cin >> s;

    vector<int> cnt(26, 0), p(26, 0);
    for (const auto& x: s) cnt[x - 'a']++;

    int ans = 0;
    for (const auto& x: s) {
        --cnt[x - 'a'];
        ++p[x - 'a'];
        int cur = 0;
        for (int i = 0; i < 26; ++i) {
            cur += min(1, cnt[i]) + min(1, p[i]);
        }
        ans = max(ans, cur);
    }

    cout << ans << '\n';
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}