#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n, t;
    cin >> n >> t;

    vector<int> a(n);
    for (auto &x : a) cin >> x;

    int ans = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int cnt = 0, sum = 0;
        for (int j = i; j < n ; ++j) {
            sum += a[j];
            if (sum > t) break;
            cnt++;
        }
        ans = max(cnt, ans);
    }

    cout << ans << endl;    
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}