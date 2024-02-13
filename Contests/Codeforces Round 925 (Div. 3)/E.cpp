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
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n, m; 
    cin >> n >> m; 
    vector<int> a(n); 

    for (auto &x : a) cin >> x;

    auto l = [&] (int p) { 
        return int(log10(p) + 1); 
    }; 

    auto p = [&] (int p) { 
        int z = 1, r = 0; 
        while (p % (z *= 10) == 0) ++r;
        return r; 
    }; 

    sort(a.begin(), a.end(), [&] (int i, int j) { 
        return p(i) < p(j); 
    }); 

    int ans = 0; 
    for (int i = n - 1; i >= 0; i--) { 
        ans += l(a[i]); 
        if (i % 2 == (n - 1) % 2) { 
            ans -= p(a[i]); 
        } 
    } 

    cout << (ans <= m ? "Anna" : "Sasha") << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}