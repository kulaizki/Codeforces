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
    for (int &x : a) cin >> x;
 
    int r = 0;
    int sum = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i) {
        while (r < n && sum + a[r] <= t) {
            sum += a[r];
            r++;
        }
        ans = max(ans, r - i);
        sum -= a[i];
    }
    
    cout << ans << '\n';
}
 
int main() {
 
    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}