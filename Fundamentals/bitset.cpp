#include <bits/stdc++.h>

using namespace std;

int main() {

    bitset<10> s;
    s[1] = 1;
    s[3] = 1;
    s[4] = 1;
    s[7] = 1;
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0

    bitset<10> t(string("0010011010")); // from right to left
    cout << s[4] << "\n"; // 1
    cout << s[5] << "\n"; // 0
}