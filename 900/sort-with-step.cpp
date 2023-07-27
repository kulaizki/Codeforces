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
    
    vector <int> p(n);
    for (int i = 0; i < n; ++i) {
        cin >> p[i];
        p[i]--;
    }

    int bad = 0;
    for (int i = 0; i < n; ++i) {
        if (p[i] % k != i % k) {
            bad++;
        }
    }

    if(bad == 0)
        cout << 0 << '\n';
    else if(bad == 2)
        cout << 1 << '\n';
    else
        cout << -1 << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}