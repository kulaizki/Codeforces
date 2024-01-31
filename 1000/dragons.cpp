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

    int s, n;
    cin >> s >> n;

    vector< pair<int, int> > v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end());

    int i;
    for (i = 0; i < n && s > v[i].first; ++i) {
        if (s > v[i].first) {
            s += v[i].second;
        }
    }

    cout << (i == n ? "YES\n" : "NO\n");
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}