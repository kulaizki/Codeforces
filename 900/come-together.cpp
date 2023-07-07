#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pt;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

#define x first
#define y second

pt A, B, C;

inline bool read() {

	if(!(cin >> A.x >> A.y))
		return false;

	cin >> B.x >> B.y;
	cin >> C.x >> C.y;
    
	return true;
}

int dist(const pt &A, const pt &B) {

    return abs(A.x - B.x) + abs(A.y - B.y);
}

void solve(int tc = 0) {

    read();
    cout << (dist(A, B) + dist(A, C) - dist(B, C)) / 2 + 1 << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}