#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int lastNumber(int n) {
  int i = n;
  while(i >= 10) {
    i %= 10;
  }
  
  return i;
}

int firstNumber(int n) {
  int i = n;
  while(i >= 10) {
    i /= 10;
  }

  return i;
}

int secondNumber(int n) {
  int i = n;
  while(i >= 100) {
    i /= 10;
  }

  return i % 10;
}

int thirdNumber(int n) {
  int i = n;
  while(i >= 1000) {
    i /= 10;
  }

  while(i >= 10) {
    i %= 10;
  }

  return i;
}

int fourthNumber(int n) {
  int i = n;
  while(i >= 10000) {
    i /= 10;
  }

  while(i >= 10) {
    i %= 10;
  }

  return i;
}

int main() {
  int i;
  int first;

  cout << "Enter a 5 digit integer: ";
  cin >> i;

  cout << firstNumber(i) << " " << secondNumber(i) << " " << thirdNumber(i) << " " << fourthNumber(i) << " " << lastNumber(i) << endl;
}
