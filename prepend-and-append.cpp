#include <bits/stdc++.h>

using namespace std;

void solve() {

	int n;
	cin >> n;
	string s;
	cin >> s;
	int l = 0, r = n-1, ans = n;
	while (s[l] != s[r] && ans > 0) {l++; r--; ans -= 2;}
	cout << ans << '\n';
}

int main() {

	ios::sync_with_stdio(0); cin.tie(0);
    int t;
    cin >> t;
    while (t--) solve();
}
