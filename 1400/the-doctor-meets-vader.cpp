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

    int s, b;
    cin >> s >> b;

    vector<int> a(s);
    for (int &x : a) cin >> x;

    vector<int> ans(s, 0);    
    for (int i = 0; i < b; ++i) {
        int d, g;
        cin >> d >> g;
        for (int j = 0; j < s; ++j) {
            if (a[j] >= d) {
                ans[j] += g;
            }
        }
    }

    for (const auto &x : ans) cout << x << ' ';

    cout << endl;
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}