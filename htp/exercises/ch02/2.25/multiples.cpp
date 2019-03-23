#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool isMultiple(int num, int num1) {
  if (num % num1 == 0) {
    return true;
  } else {
    return false;
  }
}

int main() {
  int num, num1;

  cout << "Enter a number: ";
  cin >> num;

  cout << "Enter a second number: ";
  cin >> num1;

  if (isMultiple(num, num1)) {
    cout << num << " is multiple of " << num1 << endl;
  } else {
    cout << num << " is not multiple of " << num1 << endl;
  }
}
