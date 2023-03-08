#include <bits/stdc++.h>

using namespace std;

int findSpyIndex(vector<int>& v) {
    
    int i, n = v.size(), index;

    if (v[0] == v[1] && v[0] != v[2]) 
        return 3;
    else if (v[0] == v[2] && v[0] != v[1])
        return 2;
    else if (v[1] == v[2] && v[0] != v[1])
        return 1;

    for (i = 3; i < n && v[i] == v[0]; ++i) {}

    return i+1;
}

int main() {
    int t, n;
    cin >> t;
    
    vector<int> v;
    while (t--)
    {
        cin >> n;
        v.resize(n);
        for (int j = 0; j < n; ++j) 
        {
            cin >> v[j];    
        }
        cout << findSpyIndex(v) << '\n';
    }
}

