#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int sum(int a, int b, int c) {
  return a + b + c;
}

int average(int a, int b, int c) {
  return (a + b + c) / 3;
}

int product(int a, int b, int c) {
  return a * b * c;
}

int smallest(int a, int b, int c) {
  int min = 0;

  if (a < b) {
    min = a;
  } else {
    min = b;
  }

  if (min < c) {
    return min;
  } else {
    return c;
  }
}

int largest(int a, int b, int c) {
  int max = 0;

  if (a > b) {
    max = a;
  } else {
    max = b;
  }

  if (c > max) {
    return c;
  } else {
    return max;
  }
}

int main() {
  int number, number1, number2;

  cout << "(Hint: Enter three integers followed by an space, then press enter).\n";
  cout << "Enter three integers to operate: ";
  cin >> number >> number1 >> number2;

  cout << "Sum is " << sum(number, number1, number2) << endl;
  cout << "Average is " << average(number, number1, number2) << endl;
  cout << "Product is " << product(number, number1, number2) << endl;
  cout << "Smallest is " << smallest(number, number1, number2) << endl;
  cout << "Largest is " << largest(number, number1, number2) << endl;
}
