#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  char i;

  cout << "Enter a character: ";
  cin >> i;

  cout << static_cast <int> (i) << endl;
}
