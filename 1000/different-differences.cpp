#include <bits/stdc++.h>

using namespace std;

vector<int> construct(int f, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        if (i < f - 1) {
            result.push_back(i + 2);
        } 
        else {
            result.push_back(1);
        }
    }
    return result;
}

void solve() {

    int k, n;
    cin >> k >> n;

    int ans = 1;
    for (int f = 1; f < k; f++) {
        vector<int> d = construct(f, k-1);
        int sum_d = 0;
        for (const auto& x : d) sum_d += x;
        if (sum_d <= n - 1) {
            ans = f;
        }
    }

    vector<int> res = {1};
    vector<int> d = construct(ans, k-1);
    for (const auto& x : d) {
        res.push_back(res.back() + x);
    }
    for (const auto& x : res) {
        cout << x << " ";
    }

    cout << '\n';
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}