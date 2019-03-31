#include <string>
using namespace std;

class Date {
  public:
    Date(int, int, int);
    int day;
    int month;
    int year;
    string getDate();
};
