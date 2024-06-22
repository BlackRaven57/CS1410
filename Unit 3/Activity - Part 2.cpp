#include <iostream>
#include <sstream>
using namespace std;

enum Month{
  JAN = 1,
  FEB = 2,
  MAR = 3,
  APR = 4,
  MAY = 5,
  JUN = 6,
  JUL = 7,
  AUG = 8,
  SEP = 9,
  OCT = 10,
  NOV = 11,
  DEC = 12
};

struct Date{
  int day;
  int month;
  int year;
};

string dateString(Date);

int main(){
  Date mlk_day = {21, 1, 2022};
  mlk_day.year = 2020;
  mlk_day.day = 20;

  cout << dateString(mlk_day) << endl;

  return 0;
}

string dateString(Date d){
  stringstream sstream;
  switch (d.month) {
    case 1:
    sstream << "January ";
    break;

    case 2:
    sstream << "Febuary ";
    break;
    
    case 3:
    sstream << "March ";
    break;
    
    case 4:
    sstream << "April ";
    break;
    
    case 5:
    sstream << "May ";
    break;
    
    case 6:
    sstream << "June ";
    break;
    
    case 7:
    sstream << "July ";
    break;
    
    case 8:
    sstream << "August ";
    break;
    
    case 9:
    sstream << "September ";
    break;
    
    case 10:
    sstream << "October ";
    break;
    
    case 11:
    sstream << "November ";
    break;
    
    case 12:
    sstream << "December ";
    break;
    
    default:
    sstream << "Month ";    
  }
  sstream << d.day << ", ";
  sstream << d.year;

  return sstream.str();
}
