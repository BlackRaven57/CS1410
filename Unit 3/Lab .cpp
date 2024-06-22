#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

enum Direction{
  North = 1, 
  East = 2, 
  South = 3, 
  West = 4};

struct Point{
  int x;
  int y;
};

void move(Point& p, Direction d) {
  switch(d) {
    case 1:
    p.y++;
    cout << "\n\nPostiion: (" << p.x << ", " << p.y << ")\n\n";
    break;
    case 2:
    p.x++;
    cout << "\n\nPostiion: (" << p.x << ", " << p.y << ")\n\n";
    break;
    case 3:
    p.y--;
    cout << "\n\nPostiion: (" << p.x << ", " << p.y << ")\n\n";
    break;
    case 4:
    p.x--;
    cout << "\n\nPostiion: (" << p.x << ", " << p.y << ")\n\n";
    break;
    default:
    cout << "\n\nPostiion: (" << p.x << ", " << p.y << ")\n\n";
  }
}

int main() {
  int user = 0;
  Direction d;
  Point p = {0, 0};
  cout << "Welcome to the Math Grid\n\nYour current position is: (0,0)\n";
  while (user != 5) {
    cout << "1. North\n2. East\n3. South\n4. West\n5. Quit\n\n";
    cout << "Which way would you like to go? ";
    cin >> user;
    d = static_cast<Direction>(user);
    if (user == 5) {
      break;
    }
    move(p, d);
  }
}