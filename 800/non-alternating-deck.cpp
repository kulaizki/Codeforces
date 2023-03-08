#include <bits/stdc++.h>

using namespace std;

void solve() {

    int n;
    cin >> n;

    int a = 1, b = 0; n--;
    bool aliceTakes = false;

    for (int i = 2; n > 0; i += 2) {
        if (i+i+1 <= n) {
            n -= (i+i+1);
            if (aliceTakes) {
                a += (i+i+1);
            }
            else {
                b += (i+i+1);
            }
        }
        else {
            if (aliceTakes) {
                a += n;
            }
            else {
                b += n;
            }
            n = 0;
        }

        aliceTakes ^= true;
    }

    cout << a << ' ' << b << '\n';
}

int main() {

    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}