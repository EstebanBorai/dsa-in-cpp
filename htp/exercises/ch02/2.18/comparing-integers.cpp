#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int num; 
  int num1;

  cout << "Enter an integer: ";
  cin >> num;

  cout << "Enter a second integer: ";
  cin >> num1;

  if (num > num1) {
    cout << num << " is larger" << endl;
  } else if (num1 > num) {
    cout << num1 << " is larger" << endl;
  } else {
    cout << "These numbers are equal." << endl;
  }
}
