#include <bits/stdc++.h>

using namespace std;

int gcd(int a, int b) {

    if (a == 0)
        return b;

    return gcd(b % a, a);
}

int findGCD(int arr[], int n) {

    int result = arr[0];

    // in progress
    for (int i = 1; i < n; ++i) {
        result = gcd(arr[i], result);
        if (result == 1) return 1;
    }
    
    return result;
}

void solve() {

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) cin >> arr[i];

    (findGCD(arr, n) <= n) ? cout << "Yes\n" : cout << "No\n";
}

int main() {

    ios::sync_with_stdio(0); cin.tie(0);

    int t;
    cin >> t;

    while (t--) solve();
}