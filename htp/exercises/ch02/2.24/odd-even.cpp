#include <iostream>

using std::cin;
using std::cout;
using std::endl;

bool isEven(int num) {
  if (num % 2 == 0) {
    return true;
  }
  return false;
}

int main() {
  int num;
  cout << "Enter a number: ";
  cin >> num;

  if (isEven(num)) {
    cout << num << " is Even" << endl;
  } else {
    cout << num << " is Odd" << endl;
  }
}
