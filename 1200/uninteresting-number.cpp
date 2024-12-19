#include <bits/stdc++.h>

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

void solve() {

    string n;
    cin >> n;

    int sum = 0;
    int two = 0, three = 0;
    for (char c : n) {
        sum += c - '0';
        if (c == '2') two++;
        else if (c == '3') three++;
    }

    for (int i = 0; i <= two; ++i) {
        for (int j = 0; j <= three; ++j) {
            int new_sum = sum + i * 2 + j * 6;
            if (new_sum % 9 == 0) {
                cout << "YES\n";
                return;
            }
        }
    }

    cout << "NO\n";
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve();
}