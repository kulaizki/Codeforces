#include <bits/stdc++.h>

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
    set<int> s;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
        s.insert(a[i]);
    }

    sort(a.begin(), a.end());

    if (s.size() < 2) {
        cout << -1;
    } else {
        int occ = count(a.begin(), a.end(), a[0]);
        cout << occ << ' ' << a.size() - occ << '\n';
        int i;
        for (i = 0; i < occ; ++i) {
            cout << a[i] << ' ';
        }
        cout << '\n';
        for (; i < n; ++i) {
            cout << a[i] << ' ';
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