#include <iostream>
#include "GradeBook.h"

using namespace std;

int main()
{
  GradeBook gradeBook1("CS101 Introduction to C++ Programming", "Harvey Deitel");
  GradeBook gradeBook2("CS102 Data Structures in C++", "Paul Deitel");

  gradeBook1.displayMessage();
  gradeBook2.displayMessage();
}
