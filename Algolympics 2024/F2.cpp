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

    vector<int> res(n);
    bool a[100000];
    int greatest = INT_MIN;
    for (int i = n - 1; i >= 0; ++i) {
        a[v[i]] = 1;
        greatest = max(v[i], greatest); 
        for (int j = v[i]; j < greatest; ++j) {
            if (a[j] == 1) res.push_back()
        }
    }

}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}