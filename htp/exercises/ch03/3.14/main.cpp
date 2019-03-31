#include <string>
#include <iostream>
#include "Employee.h"

using namespace std;

void printEmployee(Employee employee) {
  cout << employee.getFirstName() << " " << employee.getLastName() << " " << employee.getMonthlySalary() << endl;
}

int main() {
  Employee employee1("John", "Appleseed", 1000);
  printEmployee(employee1);
  // John Appleseed 1000
  employee1.setMonthlySalary(-1);
  printEmployee(employee1);
  // John Appleseed 0
  employee1.setMonthlySalary(1000);
  printEmployee(employee1);
  // John Appleseed 1000
}
