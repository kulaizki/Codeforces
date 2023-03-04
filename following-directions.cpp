#include <bits/stdc++.h>

using namespace std;

void solve() {
   
    int n;
    string s;
    cin >> n >> s;

    int x = 0, y = 0;

    for (const char& i: s)
    {
        if (i == 'U') y++;
        else if (i == 'D') y--;
        else if (i == 'L') x--;
        else x++;
        
        if (x == 1 && y == 1) { cout << "YES\n"; return; }
    }

    cout << "NO\n";
}

int main() {

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;
    
    while (t--) solve();
}