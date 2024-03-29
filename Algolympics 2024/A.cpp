#include <iostream>
#include <numeric>

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

    int r, c;
    cin >> r >> c;
    
    vector<int> col(c, 0), row(r, 0);
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            char cell;
            cin >> cell;
            if (cell == 'X') {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
 
    int row_rubble = accumulate(row.begin(), row.end(), 0);
    int col_rubble = accumulate(col.begin(), col.end(), 0);
 
    cout << min(row_rubble, col_rubble) << '\n';
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}