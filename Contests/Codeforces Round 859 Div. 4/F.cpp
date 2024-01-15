#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;

void solve(int tc = 0) {

    int n, m, x1, y1, x2, y2;
    string d_string;
    cin >> n >> m >> x1 >> y1 >> x2 >> y2;
    x1--; x2--; y1--; y2--;
    cin >> d_string;

    int d = (d_string[0] == 'U' ? 1+(d_string[1] == 'R' ? 2 : 0) : 0+(d_string[1] == 'R' ? 2 : 0));
    bool vis[n][m][4];
    memset(vis, false, sizeof(vis));
    int i = x1, j = y1;
    int bounces = 0;

    while(!vis[i][j][d]) {
        if(i == x2 && j == y2) {
            cout << bounces << '\n'; 
            return;
        }

        int na = 0;
        if(d % 2 == 1 && i == 0) {d -= 1; na++;}
        if(d % 2 == 0 && i == n-1) {d += 1; na++;}
        if(d >= 2 && j == m - 1) {d -= 2; na++;}
        if(d < 2 && j == 0) {d+=2; na++;}
        bounces += min(1, na);
        if(vis[i][j][d]) {break;}
        vis[i][j][d] = true;

        (d % 2 == 1) ? --i : ++i;
        (d >= 2) ? ++j : --j;
    }

    cout << -1 << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}