#include <string>
#include <sstream>
#include "Date.h"
using namespace std;

Date::Date(int day, int month, int year) {
  Date::day = day;
  
  if (month > 0 && month < 13) {
    Date::month = month;
  } else {
    Date::month = 1;
  }

  Date::year = year;
}

string Date::getDate() {
  stringstream ss;
  ss << Date::day << "/" << Date::month << "/" << Date::year;
  return ss.str();
}
