#include <bits/stdc++.h>

using namespace std;

bool binarySearch(vector<int> v, int x) {

    int k = 0, n = v.size();

    for (int b = n/2; b >= 1; b /= 2) {
        while (k+b < n && v[k+b] <= x) k += b;
    }

    return (v[k] == x);
}

int main() {

    vector<int> v = {4, 1, 3, 7, 5, 9};
    sort(v.begin(), v.end()); // must be sorted for binary search
    cout << (binarySearch(v, 7) ? "YES\n" : "NO\n");
}