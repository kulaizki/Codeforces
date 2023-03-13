#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    unordered_map<int, string> h;
    h[1] = "hello";
    h[2] = "world";
    h[7] = "Lawliet";
    auto it = h.find(7);
    it != h.end() ? cout << it -> first : cout << "null";
        
    return 0;
}