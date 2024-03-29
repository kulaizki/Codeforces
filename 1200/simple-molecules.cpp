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

    int a, b, c;
    cin >> a >> b >> c;

    int sum = a + b +c;
    if (sum & 1){ 
        cout << "Impossible\n";
    } else {
        int y = (b + c - a) / 2;
        int z = (c + a - b) / 2;
        int x = (b + a - c) / 2;
        if (x >= 0 && y >= 0 && z >= 0) {
            cout << x << ' ' << y << ' ' << z << '\n';
        } else {
            cout << "Impossible\n";
        }
    }

}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}