#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n; cin >> n;
    string s; cin >> s;

    if (is_sorted(s.begin(), s.end())) {
        cout << 0 << '\n';
        return;
    }

    string t = s;
    sort(t.begin(), t.end());
    cout << 1 << '\n';
    vector<int> ans;
    for (int i = 0; i < n; ++i) {
        if (s[i] != t[i]) {
            ans.push_back(i+1);
        }
    }

    cout << ans.size() << ' ';
    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " \n"[i+1 == ans.size()];
    }

}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}