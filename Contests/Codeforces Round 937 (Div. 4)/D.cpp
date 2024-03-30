#include <iostream>
#include <vector>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
const int MAX = 100'007;

vector<int> binary_decimals;

bool ok(int n) {

    if (n == 1) { return true; }
    bool ans = false;
    for (int i : binary_decimals) {
        if (n % i == 0) {
            ans |= ok(n / i);
        }
    }

    return ans;
}

void solve(int tc) {

    int n;
    cin >> n;
    cout << (ok(n) ? "YES\n" : "NO\n");  
}

int main() {

    kulaizki
    for (int i = 2; i < MAX; i++) {
        int curr = i;
        bool bad = false;
        while (curr) {
            if (curr % 10 > 1) {bad = true; break;}
            curr /= 10;
        }
        if (!bad) {binary_decimals.push_back(i);}
    }
    
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++) {
        solve(t);
    }
}
