#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n, m;
    cin >> n >> m;
    int x = n * m;
    int y = n * m % 3;

    cout << (y == 0 ? x / 3 : x / 3 + 1) << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}