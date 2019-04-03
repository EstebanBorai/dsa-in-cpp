#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int diameter(int radius) {
  return radius * 2;
}

int circumference(int diameter) {
  return M_PI * diameter;
}

int area(int radius) {
  return M_PI * pow(radius, 2);
}

int main() {
  int radius;
  int c_circumference;
  int c_area;
  int c_diameter;

  cout << "Enter the radius of a circle: ";
  cin >> radius;

  c_diameter = diameter(radius);
  c_circumference = circumference(c_diameter);
  c_area = area(radius);

  cout << "Circumference: " << c_circumference << endl;
  cout << "Area: " << c_area << endl;
  cout << "Diameter: " << c_diameter << endl;
}
