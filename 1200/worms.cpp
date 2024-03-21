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
    vector<int> a(n);
    vector<pair<int, int>> b(n);
    cin >> a[0]; 
    b[0].first = 1;
    b[0].second = a[0];
    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        b[i].first = i + 1;
        b[i].second = a[i] + b[i - 1].second;
    } 
    int m;
    cin >> m;
    vector<int> q(m);
    for (auto &x : q) cin >> x;

    for (const auto &x : q) {
        int l = 0, h = n - 1, mid;
        while (l <= h) {
            mid = l + (h - l) / 2;
            if (b[mid].second > x) {
                h = mid - 1;
            } else if (b[mid].second < x) {
                l = mid + 1;
            } else {
                break;
            }
        }
        cout << (b[mid].second < x ? b[mid].first + 1 : b[mid].first) << '\n';
    }
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}