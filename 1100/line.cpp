#include <bits/stdc++.h>

using namespace std;

#define activate {ios_base::sync_with_stdio(false);}
#define poof(a) {for (const auto& x : a) cout << x << ' ';}
#define mugen {cin.tie(NULL); cout.tie(NULL);}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;
// const ll mod = 1000000007;
// const ll mod = 998244353;
// ll mod;

void solve(int tc = 0) {

    int n; cin >> n;
    string s; cin >> s;

    ll sum = 0;
	vector<ll> v;
	for (int i = 0; i < n; i++) {
		if (s[i] == 'L') {
			v.push_back((n - 1 - i) - i);
			sum += i;
		} else {
			v.push_back(i - (n - 1 - i));
			sum += n - 1 - i;
		}
	}

	sort(v.rbegin(), v.rend());
	for (int i = 0; i < n; i++) {
		if (v[i] > 0) {sum += v[i];}
		cout << sum << ' ';
	}

	cout << '\n';
}

int main() {

    activate mugen
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}