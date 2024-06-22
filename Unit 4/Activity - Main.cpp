#include <iostream>
#include <time.h>
#include "Die.h"
using namespace std;
 
int main() {
 srand(time(NULL));  //Set the random seed
 //Declare die
 Die d1(20);
 Die d2(20);
 //Call methods
 d1.roll();
 d1.display();
 d2.roll();
 d2.display();
 if (d1.getDieValue() == d2.getDieValue()) {
  cout << "Doubles!" << endl;
 }
}