#include <iostream>
#include "Game.h"
#include "Spot.h"
using namespace std;

int main() {
    // Variables
    int userX;
    int userY;
    int userMines;
    bool end = false;
    Game g;

    // Welcome & Explain
    cout << "Welcome to Minesweeper 20.22!\n";
    cout << "The goal of the game is to dig up every spot except the mines. Good luck!\n\n";

    // Set Board
    cout << "How many columns would you like in your game? ";
    cin >> userX;
    cout << "How many rows would you like? ";
    cin >> userY;
    cout << "How many mines? ";
    cin >> userMines;
    // Calling the Game
    g.newGame(userX, userY, userMines);
    cout << endl;

    // Print Board
    g.print(false);

    // Run Menu
    while (!end) {
        end = g.menu();
        cout << endl;
        g.print(end);
    }
}