#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> b(n);

    for (auto& x: a) cin >> x;
    for (auto& x: b) cin >> x;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int i;
    for (i = 0; i < n && (a[i] == b[i] || a[i]+1 == b[i]); ++i) {}

    cout << (i == n ? "YES\n" : "NO\n");
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}