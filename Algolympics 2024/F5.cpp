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
    vector<pair<int, int>> p(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i];
        p[i].first = i;
        p[i].second = v[i];
    }

    sort(p.begin(), p.end(), [](const auto &x, const auto &y) {
        return x.second < y.second;
    });

    cout << "Sorted Pairs\n";
    for (const auto &x : p) {
        cout << x.first << ": " << x.second << '\n';
    }

    int l, r, m;
    vector<int> b(n);
    for (int i = n - 1; i >= 0; --i) {
        l = 0, r = n - 1;
        while (l < r) {
            m = l + (r - l) / 2;
            if (p[m].second > v[i]) {
                r = m - 1;
            } else if (p[m].second < v[i]) {
                l = m + 1;
            } else {
                break;
            }
        }
        int j;
        for (j = m + 1; j < n && p[j].second == p[m].second && i >= p[j].first; ++j) {}
        b[i] = j != n ? p[j].first + 1 : i + 1;
    }

    for (const auto &x : b) cout << x << ' ';

    cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}