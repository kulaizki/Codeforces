#include <iostream>
#include <limits>

using namespace std;

int main() {
    cout << "int: " << numeric_limits<int>::min() << " to " << numeric_limits<int>::max() << endl;
    cout << "long: " << numeric_limits<long>::min() << " to " << numeric_limits<long>::max() << endl;
    cout << "long long: " << numeric_limits<long long>::min() << " to " << numeric_limits<long long>::max() << endl;
    return 0;
}