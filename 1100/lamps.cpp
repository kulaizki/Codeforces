#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' '; cout << '';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

bool sortByCond(const pair<int, int> &a, const pair<int, int> &b) {
    return (a.first != b.first) ? a.first < b.first : a.second > b.second;
}

void solve(int tc = 0) {

    int n;
    cin >> n;

    vector<pair<int, int>> v;
    for (int i = 0; i < n; ++i) {
        int ai, bi;
        cin >> ai >> bi;
        v.pb({ai, bi});
    }

    ll cnt = 0;
    ll cost = 0;
    ll sum = 0;

    sort(v.begin(), v.end(), sortByCond);
    ll prev = v[0].first;

    for (int i = 0; i < n; ++i) {
        int curr = v[i].first;
        if (prev == curr && cnt < curr) {
            sum += v[i].second;
            cnt++;
        } 
        else if (curr == prev && cnt >= curr) {
            cnt++;
        } 
        else if (curr != prev) {
            cnt = 1;
            prev = curr;
            sum += v[i].second;
        }
    }

    cout << sum << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}