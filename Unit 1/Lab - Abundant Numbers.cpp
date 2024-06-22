#include <iostream>
#include <iomanip>
using namespace std;
 
int main() {
  int user = 1;
  double remainder;
  int sum;

  while (user != -1) {
    sum = 0;

    cout << "Enter a number (-1 to quit): ";
    cin >> user;

    if (user == -1) {
      break;
    }

    for (int i = (user - 1); i > 0; i--) {
      remainder = user % i;
      if (remainder == 0) {
        sum += i;
      }
    }

    if (sum > user) {
      cout << user << " is an abundant number.\n\n";
    }
    else if (sum < user) {
      cout << user << " is a deficient number.\n\n";
    }
    else if (sum == user) {
      cout << user << " is a perfect number.\n\n";
    }
  }

  return 0;
}
