#include <iostream>
#include <vector>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <cmath>
#include <bitset>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int length;
    cin >> length;
    vector<int> arr(length);
    arr.reserve(length);

    unordered_map<int, int> count;
    unordered_map<int, int> occurence;
    int n = arr[0];

    for (int i = 0; i < length; ++i)
    {
        cin >> arr[i];
        count[arr[i]] = 0;
        occurence[arr[i]] = occurence[arr[i]] + 1;
        if (arr[i] > n)
            n = arr[i];
    }

    vector<bool> primes(n, true);

    for (int x = 2; x <= sqrt(n); x++)
    {
        if (primes[x])
        {
            for (int y = x * x; y <= int(n / 2) + 1; y += x)
            {
                if (x % 2 != 0)
                {
                    primes[y] = false;
                }
            }
        }
    }

    set<int> prime_set;
    for (const auto &num : arr)
    {
        if (primes[num])
        {
            prime_set.insert(num);
        }
    }
    vector<int> prime_numbers(prime_set.begin(), prime_set.end());

    for (const auto &outer : arr)
    {
        if (count[outer] > 0)
        {
            cout << count[outer] << " ";
            continue;
        }

        int upper_bound = (outer * 0.5) + 2;
        for (const auto &inner : prime_numbers)
        {
            if (inner > upper_bound)
            {
                break;
            }
            if (outer % inner == 0)
            {
                (outer == inner) ? count[outer] += occurence[inner] - 1
                                 : count[outer] += occurence[inner];
            }
        }
        cout << count[outer] << " ";
    }
}