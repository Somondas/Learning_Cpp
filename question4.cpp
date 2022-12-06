#include  <iostream>

using namespace std;

int main(){
  cout << "Enter the temparature in fahrenheit: ";
  double fahrenheit;
  cin >> fahrenheit;
  double fahrenheit_in_celsius = (fahrenheit - 32) / 1.8;
  cout << "The temparature in celsius is: " << fahrenheit_in_celsius;
  return 0;
}


// Write a program to convert a temparature from fahrenheit to celsius
