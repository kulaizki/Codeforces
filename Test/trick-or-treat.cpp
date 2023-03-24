#include <bits/stdc++.h>

using namespace std;

vector<int> trickOrTreat(vector<int> &candies, int threshold) {

    sort(candies.begin(), candies.end());
    vector<int> a;
    int sum = 0;
    while (sum < threshold) {
        int i = 0;
        a.push_back(i);
        sum += candies[i];
        i++;
    }

    if (sum > threshold) {
        a.pop_back();
    }

    return a;
}

int main() {

    vector<int> a = {33, 20, 12, 19, 29};
    vector<int> b = trickOrTreat(a, 33);
    
    for (const auto& x : b) cout << x << ' ';
}