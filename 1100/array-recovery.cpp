#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {

    int n;
    cin >> n;

    vector<int> d(n);
    for (auto& x: d) cin >> x;

    vector<int> a(n);
    a[0] = d[0];
    for (int i = 1; i < n; ++i) {
        a[i] = d[i] + a[i-1];
    }

    for (const auto& x: a) cout << x << " ";
    cout << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}