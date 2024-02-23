#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
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

    vector<string> a(n);
    vector<string> b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    int ha, ma, sa, hb, mb, sb;
    vector<int> timeA(n);
    vector<int> timeB(n);
    for (int i = 0; i < n; ++i) {
        ha = a[i][0] * 10 + a[i][1] + 1000;
        ma = a[i][3] * 10 + a[i][4] + 100;
        sa = a[i][6] * 10 + a[i][7] + 10;
        hb = b[i][0] * 10 + b[i][1] + 1000;
        mb = b[i][3] * 10 + b[i][4] + 100;
        sb = b[i][6] * 10 + b[i][7] + 10;
        timeA[i] = ha + ma + sa;
        timeB[i] = hb + mb + sb; 
    }

    sort(timeA.begin(), timeA.end());
    sort(timeB.begin(), timeB.end());

    vector<int> diffA(n - 1);
    vector<int> diffB(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        diffA[i] = timeA[i + 1] - timeA[i];
        diffB[i] = timeB[i + 1] - timeB[i];
    }
    cout << '\n';
    for (const auto &x : a) cout << x << ' ';
    cout << '\n';
    for (const auto &x : b) cout << x << ' ';

    // cout << '\n';
    // for (const auto &x : timeA) cout << x << ' ';
    // cout << '\n';
    // for (const auto &x : timeB) cout << x << ' ';

    // cout << '\n';
    // for (const auto &x : timeA) cout << x << ' ';
    // cout << '\n';
    // for (const auto &x : timeB) cout << x << ' ';

    // cout << '\n';
    // for (const auto &x : timeA) cout << x << ' ';
    // cout << '\n';
    // for (const auto &x : timeB) cout << x << ' ';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}