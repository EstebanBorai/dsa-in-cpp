// implementations of the member functions proptotyped in GradeBook.h

// When defining a class’s member functions outside that class, 
// omitting the class name and binary scope resolution operator (::)
// preceding the function names causes errors

#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name)
{
  setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
  courseName = name;
}

string GradeBook::getCourseName()
{
  // returns object's courseName
  return courseName;
}

void GradeBook::displayMessage()
{
  cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
}
