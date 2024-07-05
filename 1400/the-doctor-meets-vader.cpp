#include <iostream>
#include <vector>
#include <algorithm>
#include <tuple>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;

void solve(int tc = 0) {

    int s, b;
    cin >> s >> b;

    vector<int> a(s);
    vector<pair<int, int>> bases(b);

    for (int& x : a) cin >> x;
    for (auto& x : bases) cin >> x.first >> x.second;
    sort(bases.begin(), bases.end());

    vector<int> ps(b);
    for (int i = 0; i < b; ++i) {
        ps[i] = (i ? ps[i - 1] + bases[i].second : bases[i].second);
    }

    for (int i = 0; i < s; ++i) {
        int l = 0, h = b - 1;
        int ans = 0;
        while (l <= h) {
            int m = l + (h - l) / 2; 
            if (bases[m].first <= a[i]) {
                ans = ps[m];
                l = m + 1;
            } else {
                h = m - 1;
            }
        }
        cout << ans << ' ';
    }

    cout << endl;
}

int main() {

    kulaizki
    int tc = 1;
    for (int t = 0; t < tc; t++) solve(t);
}