#include <bits/stdc++.h>

using namespace std;

int main() {

    ios::sync_with_stdio(0); cin.tie(0);
 
    int n;
    cin >> n;

    vector<int> nums1(n);
    for (int i = 0; i < n; ++i) cin >> nums1[i];
    vector<int> nums2(nums1);

    sort(nums2.begin(), nums2.end());

    for (int i = 0; i < n; ++i)
    {
        // not final
        int count = 0;
        for (int j = 0; j < n; ++j)
        {
            if (nums1[i] < nums2[j]) break;
            if (nums1[i] == nums2[j] && nums2[j+1] != nums1[i]) continue;
            if (nums1[i] % nums2[j] == 0) count++; 
        }
        cout << count << ' ';
    }
}
