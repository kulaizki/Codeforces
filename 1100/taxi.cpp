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
    vector<int> a(5);
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        a[x]++;
    }

    int sum = 0;
    while (a[1] && a[3]) {
        a[1]--;
        a[3]--;
        sum++;
    }

    if (a[1]) {
        sum += (a[1] + a[2] * 2 + 3) / 4 + a[4];
    } else if (a[3]) {
        sum += (a[2] * 2 + 3) / 4 + a[3] + a[4];
    } else {
        sum += (a[2] * 2 + 3) / 4 + a[4];
    }

    cout << sum << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}