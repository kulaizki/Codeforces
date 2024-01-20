#include <iostream>
#include <vector>
#include <algorithm>

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

    string originalSong;
    size_t i = 0;

    while (i < s.length()) {
        if (s.compare(i, 3, "WUB") == 0) {
            i += 3; 
        } else {
            size_t wordStart = i;
            while (i < s.length() && s.compare(i, 3, "WUB") != 0) {
                i++;
            }
            originalSong += s.substr(wordStart, i - wordStart);
            if (i < s.length()) {
                originalSong += ' '; 
            }
        }
    }

    cout << originalSong << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    // cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}