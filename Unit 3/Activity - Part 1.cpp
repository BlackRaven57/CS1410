#include <iostream>
using namespace std;

enum DayOfWeek{
  SUN = 1, 
  MON = 2, 
  TUE = 3, 
  WED = 4, 
  THU = 5, 
  FRI = 6, 
  SAT = 7};

string nameDayOfWeek(DayOfWeek);

int main()
{
  DayOfWeek day;
  int d;
  cout << "Enter a day number (between 1 and 7): ";
  cin >> d;
  day = static_cast<DayOfWeek>(d);
  cout << day << endl;

  cout << "Day of the week is " << nameDayOfWeek(day) << endl;
  return 0;
}

string nameDayOfWeek(DayOfWeek day){
  switch(day) {
    case SUN:
    return "Sunday";
    break;

    case MON:
    return "Monday";
    break;

    case TUE:
    return "Tuesday";
    break;

    case WED:
    return "Wednesday";
    break;

    case THU:
    return "Thursday";
    break;

    case FRI:
    return "Friday";
    break;

    case SAT:
    return "Saturday";
    break;
    
    default:
    return "Not a Day";
  }
}
