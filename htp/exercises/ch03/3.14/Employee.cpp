#include <string>
#include "Employee.h"
using namespace std;

Employee::Employee(string firstName, string lastName, int monthlySalary) {
  Employee::firstName = firstName;
  Employee::lastName = lastName;
  Employee::monthlySalary = monthlySalary;
}

string Employee::getFirstName() {
  return Employee::firstName;
}

void Employee::setFirstName(string firstName) {
  Employee::firstName = firstName;
}

string Employee::getLastName() {
  return Employee::lastName;
}

void Employee::setLastName(string lastName) {
  Employee::lastName = lastName;
}

int Employee::getMonthlySalary() {
  return Employee::monthlySalary;
}

void Employee::setMonthlySalary(int monthlySalary) {
  if (monthlySalary >= 0) {
    Employee::monthlySalary = monthlySalary;
  } else {
    Employee::monthlySalary = 0;
  }
}
