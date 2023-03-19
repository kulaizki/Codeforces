#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    int n = 1000;

    // we can make these as big as we want to satisfy  s(a) >= n && s(b) >= n
    string s = string(n, '4'), t = string(n, '5');

    // we chose 4 and 5 to cancel out everything and have the
    // sum of digits to be 1 (44445 + 55555 = 100000)
    cout << s << '5' << '\n' << t << '5' << '\n';
}