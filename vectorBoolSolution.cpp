#include <iostream>
#include <vector>

int main() {
  std::vector<char> vec; // Use std::vector<char> to avoid the optimization issues of std::vector<bool>
  vec.push_back(1); // true
  vec.push_back(0); // false
  bool b = vec[0];
  bool c = vec[1];
  std::cout << "b: " << b << std::endl; // Outputs true
  std::cout << "c: " << c << std::endl; // Outputs false
  return 0;
}
