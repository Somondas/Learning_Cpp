#include <iostream>
#include <cmath>

using namespace std;

int main(){
  cout << "Enter the radius of the circle: ";
  int radius;
  cin >> radius;
  double area = 3.14 * pow(radius, 2);
  cout << "Area of the circle: " << area;
  return 0;

}

// Write a program to calculate the area of a circle
