#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

// const ll template_array_size = 1e6 + 777;
// const lld pi = 3.14159265358979323846;
// const ll MOD = 1'000'000'007;
// const ll MOD = 998'244'353;
// const MAX = 200'007;

void solve() {

    int n, k;
    cin >> n >> k;

    vector<int> a(n), b;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        if (mp[a[i]] == 0) {
            b.push_back(a[i]);
        }
        mp[a[i]]++;
    }

    sort(b.begin(), b.end());

    n = b.size();
    int max_sum = mp[b[0]];
    int curr_sum = mp[b[0]];
    int j = 1;
    for (int i = 1; i < n; ++i, ++j) {
        if (j == k || b[i] - b[i - 1] != 1) {
            j = 1;
            max_sum = max(curr_sum, max_sum);
            curr_sum = mp[b[i]];
        } else {
            curr_sum += mp[b[i]];
        }
    }

    max_sum = max(curr_sum, max_sum);

    cout << max_sum << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}