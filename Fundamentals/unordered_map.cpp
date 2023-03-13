#include <bits/stdc++.h>
#include <unordered_map>

using namespace std;

int main()
{
     unordered_map<char, int> mp;
     mp['a'] = 7;
     mp['b'] = 8;
     mp['c'] = 9;
     for (auto it = mp.begin(); it != mp.end(); ++it) { // looping through a map using an iterator
         cout << it->first << ": " << it->second << '\n';
     }
}
