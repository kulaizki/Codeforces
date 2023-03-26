#include "bits/stdc++.h"
using namespace std;
 
#define ll long long
 
#define          all(v)              v.begin(), v.end()
#define         rall(v)              v.rbegin(),v.rend()
 
#define            pb                push_back
#define          sz(a)               (int)a.size()
 
void solve() {
    int n; cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(all(a));
    if(a[0] != 1) {
        cout << "NO\n";
        return;
    }
    vector<int> dp(5005, 0);
    dp[1] = 1;
    for(int i = 1; i < n; ++i) {
        if(!dp[a[i]]) {
            cout << "NO\n";
            return;
        }
        for(int j = 5000; j >= a[i]; --j) {
            dp[j] |= dp[j - a[i]];
        }
    }
    cout << "YES\n";
}
 
int32_t main() {
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    int t = 1;
    cin >> t;
    while(t--) {
        solve();
    }
}