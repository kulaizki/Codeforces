#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back

typedef long long int ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;

void solve(int tc = 0) {

    unordered_map<char, char> mp;
    mp['a'] = 'v';
    mp['b'] = 'c';
    mp['c'] = 'c';
    mp['d'] = 'c';
    mp['e'] = 'v';
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans;
    ans.push_back(s[0]); 
    for (int i = 1; i < n; ++i) {
        if ((mp[s[i]] == 'v' && mp[s[i - 1]] == 'c') || (mp[s[i]] == 'v' && mp[s[i - 1]] == 'c')) {
            ans.push_back(s[i]);
            ans.push_back('.');
        }
        ans.push_back(s[i]);
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}
