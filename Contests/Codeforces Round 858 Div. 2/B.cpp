#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {

    int n;
    cin >> n;

    vector<int> a(n);
    for (auto& x: a) cin >> x;
    sort(a.rbegin(), a.rend());

    vector<int> b;
    int l = 0, h = n-1;
    for (int i = 0; i < n-1; ++i) {
        b.push_back(a[i] + a[i+1]);
    }

    // unfinished
    sort(b.begin(), b.end());
    int i;
    for (i = 0; i <= b.back(); ++i) {
        if (i != b[i]) {
            cout << i << "\n";
            return;
        }
    }

    cout << i << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}