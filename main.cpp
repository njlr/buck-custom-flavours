#include <iostream>

int main() {
  #ifdef DEBUG
  std::cout << "DEBUG is enabled" << std::endl;
  #endif
  std::cout << "Hello, world. " << std::endl;
  return 0;
}
