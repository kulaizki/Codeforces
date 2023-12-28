#include <bits/stdc++.h>
#include <math.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
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

    int x, sum = 0;
    for (int i = 0; i < n; ++i) {
        cin >> x;
        sum += x;
    }

    if (ceil((double)sqrt(sum)) == floor((double)sqrt(sum))) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}