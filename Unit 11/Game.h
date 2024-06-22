#pragma once
#include "Spot.h"
#include <iostream>
#include <cstdlib>
#include <limits>
using namespace std;

class Game {
    public:
    // Start of New Game
    void newGame(int userX, int userY, int numMines) {
        // Set Game Board using user size
        sizeX = userX;
        sizeY = userY;
        mines = numMines;
        board = new Spot[sizeX * sizeY];

        // Set Mines
        srand(time(NULL));
        for (int i = 0; i < numMines; i++) {
            // Random values
            int x = rand() % sizeX;
            int y = rand() % sizeY;
            // Mine already
            if (board[sizeX * y + x].ifMine()) {
                i--;
            }
            // Not mine already
            else {
                board[sizeX * y + x].set(-1);
                
                // Set numMines around
                // Top Left 
                if (y != 0 && x != 0) {
                    board[sizeX * (y - 1) + (x - 1)].set(1);
                }
                // Top Middle
                if (y != 0) {
                    board[sizeX * (y - 1) + x].set(1);
                }
                // Top Right
                if (y != 0 && x != (sizeX - 1)) {
                    board[sizeX * (y - 1) + (x + 1)].set(1);
                }
                // Middle Left
                if (x != 0) {
                    board[sizeX * y + (x - 1)].set(1);
                }
                // Middle Right
                if (x != (sizeX - 1)) {
                    board[sizeX * y + (x + 1)].set(1);
                }
                // Bottom Left
                if (y != (sizeY - 1) && x != 0) {
                    board[sizeX * (y + 1) + (x - 1)].set(1);
                }
                // Bottom Middle
                if (y != (sizeY - 1)) {
                    board[sizeX * (y + 1) + x].set(1);
                }
                // Bottom Right
                if (y != (sizeY - 1) && x != (sizeX - 1)) {
                    board[sizeX * (y + 1) + (x + 1)].set(1);
                }
            }
        }

    }
   
    void print(bool all) {
        cout << "   ";
        // Column Numbers
        for (int x = 0; x < sizeX; x++) {
            cout << x << " ";
        }
        // Line Beneath Numbers
        cout << endl << "---";
        for (int x = 0; x < sizeX; x++) {
            cout << "--";
        }
        cout << endl;
        // Rows
        for (int y = 0; y < sizeY; y++) {
            // Row Number
            cout << y << "|";
            // Row Values
            for (int x = 0; x < sizeX; x++) {
                cout << " ";
                // Print End Game Board
                if (all) {
                    cout << board[sizeX * y + x].debugPrint();
                }
                // Print Game Board
                else {
                    cout << board[sizeX * y + x].print();
                }
            }
            cout << endl;
        }
    }

    bool menu() {
        int x = -2;
        int y = -2;
        char option;
        // Description of Next Step
        cout << "\nChoose your spot to change or -1 to quit."; 

        // Choosing the Row   
        while (0 > y || y >= sizeY) {
            cout << "\nRow: ";
            cin >> y;
            // Checking if int
            if (!cin) {
                y = -2;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Quitting if -1
            if (y == -1) {
                return true;
            }
            // If not on board tell them and try again
            else if (y < -1 || y > (sizeY - 1)) {
                cout << "Not in the board, please try again." << endl;
            }    
        }

        // Choosing the Column
        while (0 > x || x >= sizeX) {
            cout << "Column: ";
            cin >> x;
            // Checking if int
            if (!cin) {
                x = -2;
                cin.clear();
                cin.ignore(numeric_limits<streamsize>::max(), '\n');
            }

            // Qutting if -1
            if (x == -1) {
                return true;
            }
            else if (x < -1 || x > (sizeX - 1)) {
                cout << "Not in the board, please try again." << endl;
            }    
        }

        // Making sure isn't already dug
        if (board[sizeX * y + x].ifDug()) {
            cout << "Already Dug";
            return false;
        }
        // If not dug
        else {
            cout << "What would you like to do? Dig (d) or Flag (f): ";
            cin >> option;

            // If they want to dig
            if (option == 'd') {
                // If spot is a mine
                if (board[sizeX * y + x].dig()) {
                    cout << "\nYou dug up a mine.\nTHE END\n";
                    return true;
                }
                // If spot is not a mine
                else {
                    numDug++;

                    // Check if won
                    if (((sizeX * sizeY) - numDug) == mines) {
                        cout << "\nGood job, you win!\n";
                        return true;
                    }
                }
            }

            // If they want to flag
            else if (option == 'f') {
                board[sizeX * y + x].setFlag();
            }

            return false;
        }
    }

    private:
    int sizeX = 0;
    int sizeY = 0;
    int mines = 0;
    int numDug = 0;
    Spot *board;
};