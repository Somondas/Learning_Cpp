#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
  srand(time(0));
  const short max_value = 6;
  const short min_value = 1;
  int first_number = (rand() % (max_value - min_value + 1)) + min_value;
  int second_number = (rand() % (max_value - min_value + 1)) + min_value;

  cout << first_number << ", " << second_number;
  return 0;
}

// Write a program for rolling dice.
