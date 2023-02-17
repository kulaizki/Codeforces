#include <bits/stdc++.h>
 
using namespace std;
 
int main() {
    int t;
    cin >> t;

     while (t--) {
        int n, x, cnt1 = 0;
        cin >> n;
        for (int i = 0; i < n; ++i) 
        {
            cin >> x;
            cnt1 += (x == 1);
        }
        cout << n - cnt1 / 2 << '\n';
    }
}