#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

void solve() {

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    sort(a.begin(), a.end(), greater<int>());

    int sum = 0;
    for (auto &x : a) {
        if (sum + x <= k) 
            sum += x;
        else 
            break;
    }

    cout << k - sum << '\n';
}

int main() {
    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
    return 0;
}
