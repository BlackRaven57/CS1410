#include <iostream>
#include "TicTacToeGrid.h"

using std::cin,std::cout,std::endl;

int main() {
    TTTGrid game;
    char choice;
    for(int i = 0; i < 9; i++){
        cout << "Tic Tac Toe"<< endl;
        cout << game;
        cout << endl << game.getCurrentPlayer() << "\'s turn\n";
        cin >> choice;
        
        game.selectMove(choice);
        if (game.hasWon()) {
            cout << game.getCurrentPlayer() << " WINS\n";
            break;
            
        }
        else {
            game.switchPlayer();
        }
            
    }
    
    return 0;
}