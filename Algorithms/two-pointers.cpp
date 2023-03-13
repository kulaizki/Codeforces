#include <bits/stdc++.h>

using namespace std;

int removeElement(vector<int>& nums, int val) {

    int s = 0, e = nums.size()-1;
    while(s <= e) {
        if(nums[e] == val) e--;
        else if(nums[s] == val) {
            swap(nums[s], nums[e]);
            s++; e--;
        }
        else s++;
    }

    return s;
}

int main() {

    vector<int> v = {2, 4, 1, 8, 2, 2, 2, 1};

    cout << v.size() << '\n';
    for (int i: v) cout << i << ' ';
    cout << '\n' << removeElement(v, 2) << '\n';
}