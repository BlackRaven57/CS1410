#pragma once
#include "Game.h"
#include <iostream>
using namespace std;

class Flag: public Game {
    public:
    // To mark the spot as flagged & changed in Array to -2
    void flag(int a[][], int row, int column) {
        a[row][column] = -2;
    }

};