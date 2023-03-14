#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(x) (x).begin(), (x).end()
#define ll long long
#define pub push_back
#define sz(x) (int)(x).size()

void solve() {

    string s;
    cin >> s;

    int i, j = s.size() - 1;
    for (i = 0; i < j && s[i] == s[j]; ++i, --j) {}

    cout << (i == j ? "YES\n" : "NO\n");
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}