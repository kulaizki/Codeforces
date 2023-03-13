#include <iostream>
#include <tuple>

using namespace std;

int main() {

    tuple<int, int, int> t1{1, 2, 3};
    tuple<int, int, int> t2{1, 2, 3};
    tuple<int, int, int> t3{4, 5, 6};
    
    cout << (t1 == t2 ? "t1 is equal to t2\n" : "t1 is not equal to t2\n");
    cout << (t1 == t3 ? "t1 is equal to t3\n" : "t1 is not equal to t3\n");
    
    return 0;
}