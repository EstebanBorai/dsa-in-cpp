#include <iostream>
#include <math.h>

using std::cin;
using std::cout;
using std::endl;

int readInteger(int identifier) {
  int answer;
  cout << "Enter a number " << "(" << identifier << ") :";
  cin >> answer;
  return answer;
}

int main() {
  int a, b, c, d, e;
  int maxa, maxb, maxc, mina, minb, minc;

  a = readInteger(1);
  b = readInteger(2);
  c = readInteger(3);
  d = readInteger(4);
  e = readInteger(5);

  maxa = fmax(a, b);
  maxb = fmax(c, d);
  maxc = fmax(maxa, maxb);

  cout << "The largest number is " << fmax(maxc, e) << endl;

  mina = fmin(a, b);
  minb = fmin(c, d);
  minc = fmin(mina, minb);

  cout << "The smallest number is " << fmin(minc, e) << endl;
}
