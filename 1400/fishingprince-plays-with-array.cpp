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

bool check(int& v1, int& o1, int& v2, int& o2, int k) {
    while (v1 % k == 0) {
        v1 /= k;
        o1 *= k;
    }
    while (v2 % k == 0) {
        v2 /= k;
        o2 *= k;
    }
    if (v1 != v2) return 0;
    if (o1 > o2) {
        o1 -= o2;
        o2 = 0;
    }
    if (o2 >= o1) {
        o2 -= o1;
        o1 = 0;
    }

    return 1;
}

void solve(int tc = 0) {

    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (auto& x : a) cin >> x;

    int m;
    cin >> m;
    vector<int> b(m);
    for (auto& x : b) cin >> x;

    int i = 0, j = 0;
    int v1, o1, v2, o2;
    v1 = o1 = v2 = o2 = 0;

    while (i < n && j < m) {
        if (o1 == 0) {
            v1 = a[i];
            o1 = 1;
        }
        if (o2 == 0) {
            v2 = b[j];
            o2 = 1;
        }
        if (check(v1, o1, v2, o2, k) == 0) {
            cout << "No" << endl;
            return;
        }
        if (o1 == 0) i++;
        if (o2 == 0) j++;
    }

    if (i != n || j != m) {
        cout << "No" << endl;
        return;
    }

    cout << "Yes" << endl;
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}