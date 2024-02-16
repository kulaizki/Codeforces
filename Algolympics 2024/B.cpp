#include <iostream>
#include <vector>
#include <algorithm>
#include <map>


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

    vector<pair<string, int>> v;
    map<string, int> mp = {
        {"Mercury", 0},
        {"Venus", 0},
        {"Earth", 0},
        {"Mars", 0},
        {"Jupiter", 0},
        {"Saturn", 0},
        {"Uranus", 0},
        {"Neptune", 0},
        {"Pluto", 0}
    };

    for (int i = 0; i < n; i++) {
        int P;
        cin >> P;
        string p;
        for (int j = 0; j < P; j++) {
            cin >> p;
            if (j != 0) mp[p]++;
        }
        v.assign(mp.begin(), mp.end());
        sort(v.begin(), v.end(), 
        [](const pair<string, int>& a, const pair<string, int>& b) {
            if (a.second != b.second)
                return a.second > b.second;
            else
                return a.first < b.first;
            }   
        );
    }

    for (const auto& x : v) {
        cout << x.first << ' ' << x.second << '\n';    
    }
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}