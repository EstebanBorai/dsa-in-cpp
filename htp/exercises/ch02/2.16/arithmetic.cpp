#include <iostream>

using std::cout;
using std::cin;
using std::endl;

int main() {
  int num;
  int num1;

  cout << "Enter the first integer: ";
  cin >> num;

  cout << "Enter the second integer: ";
  cin >> num1;

  cout << num << " + " << num1 << " = " << num + num1 << endl;
  cout << num << " - " << num1 << " = " << num - num1 << endl;
  cout << num << " * " << num1 << " = " << num * num1 << endl;
  cout << num << " ÷ " << num1 << " = " << num / num1 << endl;
}
