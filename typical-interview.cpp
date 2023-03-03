#include <bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

    string fb;
    int c = 1;
    
    while(fb.size() < 100) 
    {
        if(c % 3 == 0) fb += "F";
        if(c % 5 == 0) fb += "B";
        c++;
    }

    int t;
    cin >> t;
    
    while (t--) 
    {
        int k;
        cin >> k;
        string s;
        cin >> s;
        cout << (fb.find(s) != string::npos ? "YES" : "NO") << '\n';
    }
}