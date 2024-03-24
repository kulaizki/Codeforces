#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

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
    vector<int> a(n);
    vector<int> cnt1(n + 1), cnt2(n + 1);
    for (auto &x : a) {
        cin >> x;
        cnt2[x]++;
    }

    int mex1 = 0, mex2 = 0;
    while (cnt2[mex2])
        ++mex2;
    for (int i = 0; i < n; ++i) {
        cnt1[a[i]]++;
        if (--cnt2[a[i]] == 0 && mex2 > a[i]) {
            mex2 = a[i];
        }
        while (mex2 && !cnt2[mex2 - 1])
            --mex2;
        while (cnt1[mex1])
            ++mex1;
        if (mex1 == mex2) {
            cout << "2\n";
            cout << 1 << ' ' << i + 1 << '\n';
            cout << i + 2 << ' ' << n << '\n';
            return;
        }
    }

    cout << "-1\n";
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}