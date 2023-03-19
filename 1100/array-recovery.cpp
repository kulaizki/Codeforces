#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {

    int n;
    cin >> n;

    vector<ll> a = {0};
    for (int i = 0; i < n; ++i) {
        ll x;
        cin >> x;
        if (x != 0 && a.back() - x >= 0) {
            cout << -1 << "\n";
            return;
        } 
        else {
            a.push_back(a.back() + x);
        }
    }

    // in progress
    for (int i = 1; i < a.size(); i++) {
        cout << a[i] << " ";
    }

     cout << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}