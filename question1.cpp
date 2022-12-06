#include <iostream>

int main(){
  int a = 1;
  int b = 2;
  int c = 0;
  std::cout << a;
  std::cout << b;
  c = a;
  a = b;
  b = c;
  std::cout << a;
  std::cout << b;
   return 0;
}
