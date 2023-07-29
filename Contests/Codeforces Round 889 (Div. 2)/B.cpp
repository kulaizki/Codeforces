#include <bits/stdc++.h>
using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define pb push_back

typedef long long ll;

void solve(int tc = 0) {

    ll n;
    cin >> n;

    int mx = 0;
    int c = 0;

    for (int i = 1; i <= 10000; ++i) {
        if (n % i == 0) {
            c++;
        }
        else {
            c = 0;
        }
        if (c > mx) {
            mx = c;
        }
    }

    cout << mx << '\n';
}

int main() {
    kulaizki
    int tc;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}