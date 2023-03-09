#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n, h, m;
        cin >> n >> h >> m;
        const int time = 60 * h + m;
        int ans = 24 * 60;
        while (n--) {
            cin >> h >> m;
            int t = 60 * h + m - time;
            if (t < 0) t += 24 * 60;
            ans = min(ans, t);
        }

        cout << ans / 60 << ' ' << ans % 60 << '\n';
    }
}