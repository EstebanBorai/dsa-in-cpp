#include <string>

using namespace std;

class GradeBook
{
  public:
    GradeBook(string, string);
    void displayMessage();
    void setCourseName(string);
    string getCourseName();
    void setInstructorName(string);
    string getInstructorName();
  
  private:
    string courseName;
    string instructorName;
};
