#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long ull;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        ull a, b, n, m, q, r;
        cin >> a >> b >> n >> m;

        q = floor(n/(m+1));
        r = n - q * (m+1);

        ull result = (q * min(a * m, b * (m+1)) + r * min(a, b)); 
        cout << result << '\n'; 
    }
}
