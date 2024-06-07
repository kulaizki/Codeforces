#include <iostream>
#include <vector>
#include <algorithm>

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

    int n, f, k;
    cin >> n >> f >> k;

    vector<int> a(n);
    for (auto &x : a) cin >> x; 
    int x = a[f - 1];
    sort(a.begin(), a.end(), greater<int>());

    if (n != k) {
        if (a[k] == x && a[k - 1] == x) {
            cout << "MAYBE\n";
        } else {
            while (k < n && a[k] > x) k++; 
            if (a[k] == x) {
                cout << "NO\n";
            } else {
                cout << "YES\n";
            }
        }
    } else {
        cout << "YES\n";
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}