#include <iostream>
#include "GradeBook.h"

using namespace std;

GradeBook::GradeBook(string name, string instructorName)
{
  setCourseName(name);
  setInstructorName(instructorName);
}

void GradeBook::setCourseName(string name)
{
  courseName = name;
}

void GradeBook::setInstructorName(string name)
{
  instructorName = name;
}

string GradeBook::getCourseName()
{
  // returns object's courseName
  return courseName;
}

string GradeBook::getInstructorName()
{
  return instructorName;
}

void GradeBook::displayMessage()
{
  cout << "Welcome to the grade book for \n" << getCourseName() << "!" << endl;
  cout << "This course is presented by: " << getInstructorName() << "." << endl;
}
