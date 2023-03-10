#include <bits/stdc++.h>

using namespace std;

void solve() {

    int a, b, c;
    cin >> a >> b >> c;

    int A = b - (c - b);
    if (A >= a && A % a == 0 && A != 0) {
        cout << "YES\n";
        return;
    }

    int B = a + (c - a) / 2;
    if (B >= b && (c - a) % 2 == 0 && B % b == 0 && B != 0) {
        cout << "YES\n";
        return;
    }

    int C = a + 2 * (b - a);
    if (C >= c && C % c == 0 && C != 0) {
        cout << "YES\n";
        return;
    }

    cout << "NO\n";
}

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}