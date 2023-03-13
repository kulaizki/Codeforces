// Here is a list of some common functions that can be used to manipulate a vector in C++:

// push_back(): Adds an element to the end of the vector.
// pop_back(): Removes the last element of the vector.
// insert(): Inserts an element at a specific position in the vector.
// erase(): Removes an element or a range of elements from the vector.
// clear(): Removes all elements from the vector.
// resize(): Changes the size of the vector.
// empty(): Returns true(1) if the vector is empty, and false otherwise.
// size(): Returns the number of elements in the vector.
// front(): Returns a reference to the first element in the vector.
// back(): Returns a reference to the last element in the vector.
// at(): Returns a reference to the element at a specific position in the vector.
// capacity()	check the overall size of a vector

#include <iostream>
#include <vector>

int main() {
  // Create a vector of integers with initial size 10
  std::vector<int> v(10);

  // Set the value of the first element to 100
  v[0] = 100;

  // prints the initial size and capacity of the vector
  std::cout << "Size: " << v.size() << std::endl;
  std::cout << "Capacity: " << v.capacity() << std::endl;
  
  // Add a new element to the end of the vector
  v.push_back(200);

  // Insert a new element at the beginning of the vector
  v.insert(v.begin(), 300);

  // Print the size and capacity of the vector
  std::cout << "Size: " << v.size() << std::endl;
  std::cout << "Capacity: " << v.capacity() << std::endl;

  // Iterate through the vector and print its elements
  for (const auto& elem : v) {
    std::cout << elem << ' ';
  }
  std::cout << std::endl;

  return 0;
}