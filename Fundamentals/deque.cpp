#include <bits/stdc++.h>

using namespace std;

int main() {

    deque<int> d;
    d.push_back(5); // [5]
    for (const auto& x : d) cout << x << ' '; cout << '\n';
    d.push_back(2); // [5,2]
    for (const auto& x : d) cout << x << ' '; cout << '\n';
    d.push_front(3); // [3,5,2]
    for (const auto& x : d) cout << x << ' '; cout << '\n';
    d.pop_back(); // [3,5]
    for (const auto& x : d) cout << x << ' '; cout << '\n';
    d.pop_front(); // [5]
    for (const auto& x : d) cout << x << ' '; cout << '\n';

}