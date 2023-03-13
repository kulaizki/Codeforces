#include <bits/stdc++.h>

using namespace std;

int main()
{
    int gfg[] = { 5, 6, 7, 7, 6, 5, 5, 6 };
 
    vector<int> v(gfg, gfg + 8); // 5 6 7 7 6 5 5 6
 
    sort(v.begin(), v.end()); // 5 5 5 6 6 6 7 7
 
    cout << "v.begin: " << *v.begin() << '\n';
    cout << "v.end: " << *v.end() << '\n';

    vector<int>::iterator lower, upper;

    lower = lower_bound(v.begin(), v.end(), 6);
    upper = upper_bound(v.begin(), v.end(), 6);

    cout << "lower: " << *lower << '\n';
    cout << "upper: " << *upper << '\n';

    cout << "lower_bound for 6 at index "
         << (lower - v.begin()) << '\n';
    cout << "upper_bound for 6 at index "
         << (upper - v.begin()) << '\n';
 
    return 0;
}