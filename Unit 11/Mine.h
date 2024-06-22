#pragma once
#include "Game.h"
#include <iostream>
#include <cstdlib>
using namespace std;

class Mine: public Game {
    public:
    // To set the 12 mines when the game starts
    void setMines(int a[][]) {
        for (int x = 0; x < 12; x++) {
            srand((unsigned) time(NULL));
            int i = rand() % 8;
            int j = rand() % 8;
            a[i][j] = -1;
        }
    }



};