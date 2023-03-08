#include <bits/stdc++.h>

using namespace std;

void solve() {
    
    int n, m; cin >> n >> m;
    string s, t; cin >> s >> t;

    reverse(t.begin(), t.end());

    s += t; // appends t to s

    int c = 0;
    for (int i = 0; i < n+m-1; ++i)
    {
        if (s[i] == s[i+1]) c++;
    }
    
    c <= 1 ? cout << "yes\n" : cout << "no\n";
}

int main() {
   
    ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
