#include <bits/stdc++.h>

using namespace std;

bool binarySearch(vector<int> v, int x) {

    int l = 0, h = v.size()-1;

    while (l <= h) {       
        int m = l + (h - l) / 2;

        if (x == v[m]) {
            return true;
        }
        else if (x < v[m]) {
            h = m - 1;
        }
        else {
            l = m + 1;
        }
    }    

    return false;
}

int main() {

    vector<int> v = {4, 1, 3, 7, 5, 9};
    sort(v.begin(), v.end()); // must be sorted for binary search
    cout << (binarySearch(v, 7) ? "YES\n" : "NO\n");
}