#include <bits/stdc++.h>

using namespace std;

int maximumSubArraySum(vector<int> v) {

    int max_sum = 0, sum = 0;
    for (const auto& x: v) {
        sum = max(x, sum+x);
        max_sum = max(max_sum, sum);
    }

    return max_sum;
}

int main() {

    vector<int> v = {-2, -3, 4, -1, -2, 1, 5, -3};
    cout << maximumSubArraySum(v);
}