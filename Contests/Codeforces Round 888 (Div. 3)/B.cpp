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

    int n;
    cin >> n;

    vector<ll> a(n), e, o;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            e.push_back(a[i]);
        } 
        else {
            o.push_back(a[i]);
        }
    }

    sort(e.begin(), e.end());
    sort(o.begin(), o.end());

    vector<ll> b(n); 
    int e_idx = 0;
    int o_idx = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] % 2 == 0) {
            b[i] = e[e_idx++];
        }
        else {
            b[i] = o[o_idx++];
        }
    }

    int x;
    for (x = 0; x < n-1 && b[x] <= b[x+1]; ++x) {}

    cout << (x == n-1 ? "YES\n" : "NO\n");
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}