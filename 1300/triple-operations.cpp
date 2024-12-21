#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const int MAX = 200'007;
const int MOD = 1'000'000'007;

int a[MAX], psum[MAX];

int f(int x) {
    int cnt = 0;
    while (x) {
        x /= 3;
        cnt++;
    }
    return cnt;
}

void solve() {
    int l, r;
    cin >> l >> r;
    cout << psum[r] - psum[l - 1] + a[l] << '\n';
}

int main() {
    kulaizki

    // fill up memo table from 1 to max
    psum[0] = 0;
    for (int i = 1; i < MAX - 1; i++) {
        a[i] = f(i);
        psum[i] = psum[i - 1] + a[i];
    }

    int tt;
    cin >> tt;
    for (int i = 1; i <= tt; i++) {
        solve();
    }
}
