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

    int n;
    cin >> n;

    vector<int> v(n);
    for (auto &x : v) cin >> x;

    for (int i = 0; i < n; ++i) {
        vector<pair<int, int>> vi;
        vi.clear();
        for (int j = i + 1; j < n; ++j) {
            if (v[j] > v[i]) vi.push_back(make_pair(j, v[j]));
        }
        if (vi.empty()) {
            cout << i + 1 << ' ';
        } else {
            sort(vi.begin(), vi.end(), [](const auto& x, const auto& y) {
                return x.second < y.second;
            });
            cout << vi[0].first + 1 << ' ';
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