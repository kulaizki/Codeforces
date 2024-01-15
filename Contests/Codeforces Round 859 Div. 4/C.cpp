#include <bits/stdc++.h>

using namespace std;
#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

ll n, m, k, q, l, r, x, y, z;
const ll template_array_size = 1e6 + 585;
ll a[template_array_size];
ll b[template_array_size];
ll c[template_array_size];
string s, t;
ll ans = 0;

void solve(int tc = 0) {

    cin >> n;
    cin >> s;
    int dict[26] = {0};
    
    string bnry;    
    for (ll i = 0; i < n; ++i) {
        int ltr = s[i] - 'a';
        if (dict[ltr] == 0) {
            if (i % 2 == 0) {
                dict[ltr] = 1;
            } else {
                dict[ltr] = -1;
            }
        }

        (dict[ltr] > 0) ? bnry += '1' : bnry += '0';
    }

    for (int i = 0; i < n - 1; ++i) {
        if (bnry[i] == bnry[i+1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}