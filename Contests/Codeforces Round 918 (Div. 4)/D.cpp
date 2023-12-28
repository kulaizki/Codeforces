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
    
    int n;
    cin >> n;
    string s;
    cin >> s;

    map<char, bool> mp;
    mp['a'] = 1;
    mp['e'] = 1;
    mp['i'] = 1;
    mp['o'] = 1;
    mp['u'] = 1;

    string ans;
    for (int i = 0; i < s.size(); ++i) {
        if (mp[s[i]]) {
            ans.push_back(s[i]);
            int j = i + 1;
            if (j + 1 <= s.size() - 1) {
                if (mp[s[j]] == 0 && mp[s[j + 1]] == 0) {
                    ans.push_back(s[j]);
                    ans.push_back('.');
                    i = j;
                } else {
                    ans.push_back('.');
                }
            }
        } else {
            ans.push_back(s[i]);
        }
    }

    cout << ans << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}
