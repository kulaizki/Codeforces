#include <bits/stdc++.h>

using namespace std;

#define kulaizki {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define poof(a) {for (const auto& x : a) cout << x << ' '; cout << '\n';}
typedef long long ll;
typedef long double lld;
typedef unsigned long long ull;

const ll template_array_size = 1e6 + 585;
const lld pi = 3.14159265358979323846;

vector<bool> isPrime;

void sieve(int n) {
    isPrime.resize(n + 1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i * i <= n; ++i) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

void solve(int tc = 0) {

    int n; 
    cin >> n;

    vector<int> permutation(n);
    vector<int> primes, nonPrimes;

    sieve(n);

    for (int i = 1; i <= n; ++i) {
        if (isPrime[i]) {
            primes.push_back(i);
        } else {
            nonPrimes.push_back(i);
        }
    }

    int pIndex = 0, npIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (i % 2 == 0 && pIndex < primes.size()) {
            permutation[i] = primes[pIndex++];
        } else if (npIndex < nonPrimes.size()) {
            permutation[i] = nonPrimes[npIndex++];
        } else {
            permutation[i] = primes[pIndex++];
        }
    }

    poof(permutation);
}

int main() {

    kulaizki
    int tc = 1;
    cin >> tc;
    for (int t = 0; t < tc; t++) solve(t);
}