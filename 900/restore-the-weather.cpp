#include <bits/stdc++.h>

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

    int n, k;
    cin >> n >> k;

    vector<pair<int, int>>a(n);
    vector<int>b(n), ans(n);

    for(int i = 0; i < n; i++){
        cin >> a[i].first;
        a[i].second = i;
    }

    for(auto &i : b) cin >> i;
    sort(b.begin(), b.end());
    sort(a.begin(), a.end());

    for(int i = 0; i < n; i++)
        ans[a[i].second] = b[i];
    
    for(auto &i : ans) cout << i << ' ';

    cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}