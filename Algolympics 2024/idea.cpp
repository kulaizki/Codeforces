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
    int a[n];
    for (auto &x : a) cin >> x;

    int b[n], greatest = n - 1;
    for (int i = n - 1; i >= 0; --i) {
        if (a[i] >= a[greatest]) {
            greatest = i;
            b[i] = i;
        } else {
            int least = i;
            for (int j = i + 1; j < n; ++j) {
                if (a[j] > a[i]) {
                    if (least == i) {
                        least = j;
                    } else if (a[j] < a[least]) {
                        least = j;
                    }
                }
            }
            b[i] = least;
        }
    }

    for (const auto &x : b) cout << x + 1 << ' ';

    cout << '\n';
}


int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}
