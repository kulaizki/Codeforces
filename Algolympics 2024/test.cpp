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

    for (auto &x : a)
        cin >> x;

    set<int> s;
    vector<int> result(n, -1);

    for (int i = n - 1; i >= 0; --i) {
        auto it = s.lower_bound(a[i]);

        if (it != s.end())
            result[i] = *it;

        s.insert(a[i]);
    }

    for (const auto &x : result)
        cout << (x == -1 ? -1 : x + 1) << ' ';

    cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}