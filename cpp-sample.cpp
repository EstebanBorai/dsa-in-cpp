/**
 *  Pretty brief sample of some of the C++ features, syntax and building blocks.
 *
 */

#include <cstdlib>
#include <iostream>
#include <string>

// twoNumbers prompts the user for two values
// and returns the total sum between them
void twoNumbers() {
  int x, y;

  std::cout << "Please enter two numbers ";
  std::cin >> x >> y;

  int sum = x + y;
  std::cout << "Their sum is " << sum << std::endl;
}

void enumerations() {
  enum Day {
    SUN,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
  };

  enum Mood {
    HAPPY = 3,
    SAD = 1,
    ANXIOUS = 4,
    SLEEPY = 2
  };

  Day today = FRI;
  Mood myMood = HAPPY;
}

void pointers() {
  char ch = 'Q';
  char* p = &ch;                    // p holds the address of ch
  std::cout << *p << std::endl;     // outputs the character 'Q'
  ch = 'Z';                         // ch now holds 'Z'
  std::cout << *p << std::endl;     // outputs the character 'Z'
  *p = 'X';                         // ch now holds 'X'
  std::cout << ch << std::endl;     // outputs the character 'X'

  // Important Note!
  int* x, y, z;   // sames as: int* x; int y; int z;
}

void array() {
  double f[5];    // array of 5 doubles f[0] ... f[4]
  int m[10];      // array of 10 ints; m[0] ... m[9]
  f[4] = 2.5;
  m[2] = 4;

  std::cout << f[m[2]] << std::endl; // outputs f[4] which is 2.5

  int a[] = {10, 11, 12, 13};   // declares and initializes a[4]
  bool b[] = { false, true };   // declares and initializes b[2]
  char c[] = {'c', 'a', 't'};   // declares and initializes c[3]
}

void pointersAndArrays() {
  char c[] = {'c', 'a', 't'};

  char* p = c;                   // p points to c[0]
  char* q = &c[0];               // q also points to c[0]

  std::cout << c[2] << p[2] << q[2] << std::endl;  // outputs "ttt"
}

void string() {
  std::string s = "to be";
  std::string t = "not " + s;
  std::string u = s + " or" + t;

  if (s > t) {
    std::cout << u << std::endl;
  }
}

void stringLength() {
  std::string s = "John";
  int i = s.size();

  char c = s[3];

  s += " Smith";

  std::cout << s + c << std::endl;
}

void cppStruct() {
  enum MealType {
    NO_PREF,
    REGULAR,
    LOW_FAT,
    VEGETARIAN
  };

  struct Passenger {
    std::string  name;
    MealType     mealPref;
    bool         isFreqFlyer;
    std::string  freqFlyerNo;
  };

  Passenger pass = {
    "John Smith",
    VEGETARIAN,
    true,
    "293145"
  };

  std::cout << pass.name << std::endl;
  std::cout << pass.mealPref << std::endl;
  std::cout << pass.isFreqFlyer << std::endl;
  std::cout << pass.freqFlyerNo << std::endl;

  pass.name = "John Appleseed";
  pass.mealPref = REGULAR;

  std::cout << pass.name << std::endl;
  std::cout << pass.mealPref << std::endl;
}

int main() {
  twoNumbers();
  enumerations();
  pointers();
  array();
  pointersAndArrays();
  string();
  stringLength();
  cppStruct();
}
