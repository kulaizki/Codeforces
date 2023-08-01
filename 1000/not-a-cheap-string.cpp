#include <bits/stdc++.h>

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
    int p;
    cin >> p;

    string w(s);
    sort(w.rbegin(), w.rend());

    int cost = 0;
    for (int i = 0; i < s.size(); ++i) {
        cost += s[i] - 'a' + 1;
    }

    map<char, int> del;
    for (int i = 0; i < w.size(); ++i) {
        if (cost > p) {
            del[w[i]]++;
            cost -= w[i] - 'a' + 1;
        }
    }

    for (int i = 0; i < s.size(); ++i) {
        if (del[s[i]] > 0) {
            del[s[i]]--;
            continue;
        }
        cout << s[i];
    }

    cout << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}