#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define pb push_back
#define pbds                                               \
    tree<pair<int, int>, null_type, less<pair<int, int> >, \
         rb_tree_tag, tree_order_statistics_node_update>
using namespace __gnu_pbds;

typedef long long int ll;
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

    vector<pair<int,int>> v;
    vector<int> arr;
    for(int i = 0; i < n; i++){
        int a,b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    sort(v.begin(), v.end());
    pbds s;
    for(int i = n - 1; i >= 0; i--){
        arr.push_back(s.order_of_key({v[i].second, i}));
        s.insert({v[i].second, i});
    }

    ll sum = 0;
    for(auto it: arr) sum += it;

    cout << sum << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}