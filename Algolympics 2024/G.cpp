#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

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

void solve(int tc = 0) {

    int n;
    cin >> n;
    
    vector<pair<string, string>> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i].first; 
        char d;
        cin >> d;
        cin >> v[i].second;
    }

    sort(v.begin(), v.end(), [](const auto& x, const auto& y) {
        return x.second < y.second;
    });

    int ans = 0;
    string start = "00:00:00";

    for (const auto &x : v) {
        if (x.first > start) {
            start = x.second;
            ans++;
        }
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}