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

    int q;
    cin >> q;

    vector<int> a;
    int cnt = 0;
    for (int i = 0; i < q; i++) {
        int x;
        cin >> x;
        int nw_cnt = cnt + (!a.empty() && a.back() > x);
        if (nw_cnt == 0 || (nw_cnt == 1 && x <= a[0])) {
            a.push_back(x);
            cnt = nw_cnt;
            cout << '1';
        } else {
            cout << '0';
        }
    }
    
    cout << '\n';
}

int main() {
    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}