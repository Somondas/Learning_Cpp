#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  long elapsedSeconds = time(0);
  srand(elapsedSeconds);
  int number = rand() % 10;
  cout << number;
  return 0;
}
