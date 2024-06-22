#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
using namespace std;

int rand();

class PigPlayer {
    public:    
    void roll() {
        die = (rand() % 6) + 1;
    }

    int stop(char user) {
        if (user == 's') {
            this->total += this->turnTotal;
            this->resetTurnTotal();
            return 1;
        }
        else if (user == 'r') {
            roll();
            if (this->die == 1) {
                cout << "You rolled a 1";
                this->resetTurnTotal();
                return 1;
            }
            else {
                cout << "You rolled a " << this->die;
                this->turnTotal += this->die;
                return 2;
            }
        }
        else {
            cout << "Not a valid choice";
            return 3;
        }
    }

    void resetTurnTotal() {
        turnTotal = 0;
    }
    
    void addTotal() {
        this->total += this->turnTotal;
    }
    
    void addTurnTotal() {
        this->turnTotal += this->die;
    }

    int getDieValue() {
        return die;
    }

    int getTurnTotal() {
        return turnTotal;
    }

    int getTotal() {
        return total;
    }

    private:
    int die;
    int turnTotal = 0;
    int total = 0;
};

int main() {
    srand((unsigned int)time(NULL));
    PigPlayer comp;
    PigPlayer user;
    char choice;
    int next = 2;
    int x;
    cout << "Welcome to Pig Game!\nTry to get to 100 points before the computer.\n";

    while ((comp.getTotal() < 100) && (user.getTotal() < 100)) {
        while (next != 1) {
            cout << "\n\nTurn Total: " << user.getTurnTotal() << endl;
            cout << "Player Game Total: " << user.getTotal() << "\tComputer Game Total: " << comp.getTotal() << endl;
            cout << "Roll (r) or Stop (s): ";
            cin >> choice;
            next = user.stop(choice);
        }
        if (user.getDieValue() == 1) {
            user.resetTurnTotal();
        }
        else {
            user.addTotal();
            user.resetTurnTotal();
        }
        comp.roll();
        cout << endl;
        if (user.getTotal() > 100) {
            break;
        }
        while (comp.getDieValue() != 1) {
            cout << "\nComputer Rolled: " << comp.getDieValue();
            comp.addTurnTotal();
            x = rand() % 3;
            if (x == 0) {
                cout << "\nComputer Stopped";
                comp.addTotal();
                comp.resetTurnTotal();
                next = 2;
                break;
            }
            else {
                comp.roll();
            }
        }
        if (comp.getDieValue() == 1) {
            cout << "\nComputer Rolled: " << comp.getDieValue();
            comp.resetTurnTotal();
            next = 2;
        }
    }

    if (user.getTotal() > 100) {
        cout << "You Win!!!";
    }
    
    else {
        cout << "\n\nYou lose. Computer wins.";
    }
}