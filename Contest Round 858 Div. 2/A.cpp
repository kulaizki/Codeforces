#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

void solve() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (d >= b && (a + (d - b)) >= c) {
        int ans = 0;
        ans += d - b;
        a += d - b;
        if (a > c) ans += a - c;
        cout << ans << "\n";
    }
    else {
        cout << -1 << "\n";
        return;
    }
}

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    int t;
    cin >> t;
    while (t--) solve();
}