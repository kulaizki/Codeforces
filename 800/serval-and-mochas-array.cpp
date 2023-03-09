#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; ++i) 
        cin >> v[i];

    int flag = 0;
    for (int i = 0; i < n && flag == 0; ++i) {
        for (int j = i+1; j < n; ++j) {
            if ((__gcd(v[i], v[j]) <= 2)) {
                flag = 1;
                break;
            }
        }
    }

    (flag == 1) ? cout << "YES\n" : cout << "NO\n";
}

int main() {

    ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}
