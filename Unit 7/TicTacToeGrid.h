#ifndef TTTGrid_hpp
#define TTTGrid_hpp

#include <stdio.h>
#include <iostream>
using std::ostream;
using std::endl;

enum{X = 'X', O = 'O'};

class TTTGrid{
public:
    const int SIZE = 3;
    TTTGrid();
    void switchPlayer();
    void selectMove(char);
    
    bool hasWon();
    
    char getCurrentPlayer();
    friend ostream &operator <<(ostream&, const TTTGrid &);
private:
    char grid[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
        
    };
    char player;
    
};

#endif

TTTGrid::TTTGrid(){
    player = X;
    
}

void TTTGrid::switchPlayer(){
    if(player == X){
        player = O;
    }else{
        player = X;
    }
}

void TTTGrid::selectMove(char choice){
    for(int r = 0; r < SIZE; r++){
        for(int c = 0; c < SIZE; c++){
            if(grid[r][c] == choice){
                grid[r][c] = player;
                break;
            }
        }
    }
}

char TTTGrid::getCurrentPlayer(){
    return player;
}

ostream &operator <<(ostream& out, const TTTGrid &g){
    out << "+-+-+-+\n";
    
    for(int r = 0; r < g.SIZE; r++){
        out <<'|';
        for(int c = 0; c < g.SIZE; c++){
            out <<g.grid[r][c] << '|';
        }
        out << endl;
    }
    
    out << "+-+-+-+\n";
    return out;
}


bool TTTGrid::hasWon(){
    for(int r = 0; r < SIZE; r++){
        if(grid[r][0] == player && grid[r][1] == player && grid[r][2] == player){
            return true;
        }
    }
    for(int c = 0; c < SIZE; c++){
        if(grid[0][c] == player && grid[1][c] == player && grid[2][c] == player){
            return true;
        }
    }
    if(grid[0][0] == player && grid[1][1] == player && grid[2][2] == player){
        return true;
    }
    if(grid[0][2] == player && grid[1][1] == player && grid[2][0] == player){
        return true;
    }
    return false;
}