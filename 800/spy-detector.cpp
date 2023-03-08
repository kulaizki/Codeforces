#include <bits/stdc++.h>

using namespace std;

int findSpyIndex(vector<int>& v) {
    
    int i, n = v.size();
    for (i = 0; i < n && (v[i] == v[i+1] && v[i] == v[i+2]); ++i) {}

    int index;
    if (v[i] == v[i+1]) 
        index = i+3;
    else if (v[i] == v[i+2])
        index = i+2;
    else
        index = i+1;

    return index;
}

int main() {
    int t, n;
    cin >> t;
    
    vector<int> v;
    while (t--) {
        cin >> n;
        v.resize(n);
        for (int j = 0; j < n; ++j) 
        {
            cin >> v[j];    
        }
        cout << findSpyIndex(v) << '\n';
    }
}
