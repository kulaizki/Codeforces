#include <bits/stdc++.h>
using namespace std;

int main() {

    string cf = "codeforces";
    int t;
    char c;

    cin >> t;

    while (t--)
    {
        cin >> c;
        size_t check = cf.find(c);
        if (check != string::npos)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
