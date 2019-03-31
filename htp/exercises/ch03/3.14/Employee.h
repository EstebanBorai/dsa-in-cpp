#include <string>
using namespace std;

class Employee {
  public:
    Employee(string, string, int);
    string getFirstName();
    void setFirstName(string);
    string getLastName();
    void setLastName(string);
    int getMonthlySalary();
    void setMonthlySalary(int);

  private:
    string firstName;
    string lastName;
    int monthlySalary;
};
