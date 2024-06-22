#pragma once
#include "Game.h"
#include <iostream>
using namespace std;

class Spot {
    public:
    // Variables
    bool mine = false;
    bool flag = false;
    bool dug = false;
    int numMines;

    Spot(): numMines(0) {}

    // To set the Number of Mines nearby 
    // Takes an int for how many mines are near or if it's a mine
    void set(int mineCount) {
        if (mineCount == -1) {
            mine = true;
        }
        else {
            numMines += mineCount;
        }
    }

    // Return whether spot has already been dug
    bool ifDug() {
        return dug;
    }

    // Returns whether the spot is a mine
    bool ifMine() {
        return mine;
    }

    // Flag the Spot
    void setFlag() {
        flag = true;
    }

    // Dig the Spot & return whether it's a mine or not
    bool dig() {
        dug = true;
        return mine;
    }

    // Prints Character for Spot
    char print() {
        // Dug and a Mine
        if (dug && mine) {
            return 'M';
        }
        // Dug and not a Mine
        else if (dug) {
            return numMines + '0';
        }
        // Flagged
        else if (flag) {
            return 'F';
        }
        // Not dug
        else {
            return '@';
        }
    }

    // For debugPrint
    char debugPrint() {
        if (mine) {
            return 'M';
        }
        return numMines + '0';
    }

};
