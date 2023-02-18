#include <bits/stdc++.h>

using namespace std;

int main()
{
    int length;
    cin >> length;

    int num;

    unordered_map<int, int> possible;

    // Input array
    vector<int> arr(length);
    for (int x = 0; x < length; x++)
    {
        cin >> arr[x];
        possible[arr[x]] = -1;
    }

    for (int x = 0; x < length; x++)
    {
        for (int y = arr[x]; y < *max_element(arr.begin(), arr.end()) + 1; y += arr[x])
        {
            // cout << "Possible.count(y) = " << possible.count(y) << '\n';
            if (possible.count(y))
            {
                possible[y]++;
            }
        }
        cout << "possible[y] = " << possible[arr[x]] << '\n';
    }

    // Print result
    for (const auto &i: arr)
    {
        cout << possible[i] << " ";
    }
}