#include <iostream>
#include <vector>
#include <set>

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

    vector<int> a(n), b(n);
    cin >> a[0];
    b[0] = 0;

    for (int i = 1; i < n; ++i) {
        cin >> a[i];
        b[i] = a[i] > a[b[i - 1]] ? i : b[i - 1]; 
    }

    set<int> s(b.begin(), b.end());
    vector<int> L(s.begin(), s.end());
    for (int i = 0; i < n; ++i) {
        if (i + 1 < L.size()) {
            cout << L[b[i] + 1] + 1 << ' ';
        } else {
            cout << i + 1 << ' ';
        }
        // cout << "Lsize: " << L.size() << '\n';
        // for (const auto &x : L) cout << x << ' ';
    }

    // for (const auto &x : b) cout << x << ' ';

    cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}
