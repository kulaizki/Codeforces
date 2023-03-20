#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;

void solve(int tc = 0) {

    int a, b;
    cin >> a >> b;

    if (abs(a) == abs(b)) {
        cout << 2 * abs(a) << '\n';
        return;
    }

    cout << 2 * max(abs(a), abs(b)) - 1 << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}