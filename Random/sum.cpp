#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        cout << (a + b == c || a + c == b || b + c == a ? "YES\n" : "NO\n");
    }
}