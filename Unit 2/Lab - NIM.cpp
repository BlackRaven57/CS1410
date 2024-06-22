#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

bool validMove(int user, int stones) {
    if ((user < 1) || (user > 3)) {
      return false;
    }
    else if (user >= stones) {
      if ((stones == 1) && (user == 1)) {
        return true;
      }  
      else {
        return false;
      }    
    }
    else {
      return true;
    }
  } 

int computer(int stones) {
    srand(time(0));
    int computer;
    if (stones == 1) {
      computer = 1;
    }
    else if (stones == 2) {
      computer = 1;
    }
    else if (stones == 3) {
      computer = 2;
    }
    else if (stones == 4) {
      computer = 3;
    }
    else {
      computer = (rand() % 3) + 1;
    }

    return computer;
  }

int main() {
  int user;
  int comp;
  int stones = 16;
  bool userWin = true;
  bool valid;
  
  while (stones > 0) {
    cout << "Stones in the pile: " << stones << endl;
    cout << "How many will you take? ";
    cin >> user;
    valid = validMove(user, stones);
    if (valid == false) {
      cout << "Invalid Amount" << endl;
      continue;
    }
    stones -= user;
    if (stones == 0) {
      userWin = false;
      continue;
    }
    comp = computer(stones);
    cout << "Computer takes " << comp << endl << endl;
    stones -= comp;
    }

    if (userWin == true) {
      cout << "You win!" << endl;
    }
    else {
      cout << endl << "Computer wins!" << endl;
    }

  return 0;
}
