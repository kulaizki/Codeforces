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
    
    int n;
    cin >> n;

    string s;
    cin >> s;

    int initial_switches = 0;
    if (s[0] == '1') { // Finger starts on '0', switch needed for first char if '1'
        initial_switches++;
    }

    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i-1]) { // Switch needed if current char differs from previous
            initial_switches++;
        }
    }
    
    int final_switches;
    if (initial_switches <= 1) { // If 0 or 1 switch, cannot reduce further with one reversal.
        final_switches = initial_switches;
    } else if (initial_switches == 2) { // If 2 switches, can always reduce by 1.
        final_switches = initial_switches - 1;
    } else { // initial_switches >= 3. Can always reduce by 2.
        final_switches = initial_switches - 2;
    }
    
    // Total cost = N (presses) + final_switches
    cout << n + final_switches << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}