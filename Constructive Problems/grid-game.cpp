#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long

int main() {

    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    string s;
    cin >> s;
    int n = s.length();

    int v = 0, h = 0;
    for (int i = 0; i < n; ++i) {
        if (s[i] == '0') {
            cout << 2 << " " << v + 1 << '\n';
            v = (v + 1) % 4; // % 4 jumps back and resets
        } else {
            cout << 1 << " " << h + 1 << '\n';
            h = (h + 2) % 4; // h + 2 because we jump from 2 cols
        }
    }
}