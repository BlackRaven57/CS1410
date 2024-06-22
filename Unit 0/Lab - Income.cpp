#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  double twentyTwo, twentyOne, twenty, nineteen, eighteen, average;

  cout << "Enter income for 2022: ";
  cin >> twentyTwo;
  
  cout << "Enter income for 2021: ";
  cin >> twentyOne;
  
  cout << "Enter income for 2020: ";
  cin >> twenty;
  
  cout << "Enter income for 2019: ";
  cin >> nineteen;
  
  cout << "Enter income for 2018: ";
  cin >> eighteen;

  average = (twentyTwo + twentyOne + twenty + nineteen + eighteen) / 5;
  cout << endl << "Income (averaged over the past 5 years) is: $" << fixed << setprecision(2) << average;

  return 0;
}
