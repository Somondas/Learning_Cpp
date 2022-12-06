#include <iostream>

int main(){
  int x = 10;
  // int y = x++;// x = 10, y = 11 - First asign, then increase -- Post Increament
  // std::cout << y;
  int z = ++x; // x = 11, y = 11 - First increase, then asign -- Pre Increament
  std::cout << z;
  return 0;
}
