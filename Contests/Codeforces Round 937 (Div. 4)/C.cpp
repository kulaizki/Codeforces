#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <stdlib.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    string s;
    cin >> s;

    bool flag = false;
    int hr = stoi(s.substr(0, 2));
    if (hr > 12)     {
        flag = true;
    }

    string t;
    if (flag) {
        t = "0" + to_string(hr - 12);
    }
    if (s[0] == '0' && s[1] == '0') {
        t = "12";
    }
    if (hr > 21) {
        t = to_string(hr - 12);
    }

    cout << (flag || t == "12" ? t : s.substr(0, 2)) << ':' << s[3] << s[4] << (hr >= 12 ? " PM\n" : " AM\n");
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}