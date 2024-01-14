#include <iostream>
#include <cmath>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}

typedef long long ll;

void solve(int tc = 0) {
    int n, m, a;
    cin >> n >> m >> a;

    ll neededFlagstones = ceil(static_cast<double>(n) / a) * ceil(static_cast<double>(m) / a);

    cout << neededFlagstones << '\n';
}

int main() {
    kulaizki
    int tc = 1;
    for (int t = 0; t < tc; t++) solve(t);
    return 0;
}