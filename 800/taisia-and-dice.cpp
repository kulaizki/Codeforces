#include <bits/stdc++.h>

using namespace std;

int n, s, r;
vector<int> res;

void solve() {

    res.clear();
    int d = s - r;
    
    while (r >= d) {
        res.push_back(d);
        r -= d;
    }

    if (r) res.push_back(r);
    
    for (int i = 0; i < res.size() && res.size() + 1 < n;) {
        if (res[i] == 1) {
            ++i;
            continue;
        }
        --res[i];
        res.push_back(1);
    }

    res.push_back(d);
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) {
        cin >> n >> s >> r;
        solve();
        sort(res.begin(), res.end());
        for (const int &i: res) {
            cout << i << ' ';
        }
        cout << '\n';
    }
}