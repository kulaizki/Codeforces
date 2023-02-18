#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main()
{
    ios::sync_with_stdio(0); cin.tie(0);

    int length;
    cin >> length;

    int num;

    unordered_map<int, int> possible;

    // Input array
    vector<int> arr(length);
    for (int x = 0; x < length; x++)
    {
        cin >> num;
        arr[x] = num;
        possible[num] = 0;
    }

    int max_num = *max_element(arr.begin(), arr.end()) + 1;

    for (int x = 0; x < length; x++)
    {
        for (int y = arr[x]; y < max_num; y += arr[x])
        {
            if (possible.count(y))
            {
                possible[y]++;
            }
        }
    }

    // Print result
    for (auto i : arr)
    {
        cout << possible[i] - 1 << " ";
    }
}