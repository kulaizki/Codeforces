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

    vector<pair<int, int>> a(s);
    vector<tuple<int, int, int>> bases(b);
    for (int i = 0; i < s; ++i) {
        cin >> a[i].first;
        a[i].second = i;
    }
    for (int i = 0 ; i < b; ++i) {
        int d, g;
        cin >> d >> g;
        bases[i] = {d, g, i};
    }

    sort(a.begin(), a.end());
    sort(bases.begin(), bases.end());

    vector<int> ans(s, 0);    
    for (int i = 0; i < b; ++i) {
        auto it = lower_bound(a.begin(), a.end(), make_pair(get<0>(bases[i]), 0));
        for (; it != a.end(); ++it) {
            ans[it->second] += get<1>(bases[i]);
        }
    }

    poof(ans); 

    cout << endl;
}

int main() {

    kulaizki
    int tc = 1;
    for (int t = 0; t < tc; t++) solve(t);
}