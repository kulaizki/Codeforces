#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {

    int n; cin >> n;
    char c; cin >> c;
    string s; cin >> s;

    s += s;
    int mx = 0, cnt = 0;
    for (int i = 0; i < s.size(); ++i) {
        if (s[i] == c) {
            cnt = 0;
            while (s[i] != 'g' && i < s.size()) {
                cnt++;
                i++;
            }
            if (cnt > mx) mx = cnt;
        }
    }

    cout << mx << "\n";
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}