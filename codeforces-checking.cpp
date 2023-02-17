#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;

    while (t--)
    {
        string cf = "codeforces";
        char c;
        cin >> c;
        size_t check = cf.find(c);

        if (check != string::npos)
            cout << "yes\n";
        else
            cout << "no\n";
    }
}
