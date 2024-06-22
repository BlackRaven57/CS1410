#include <iostream>
#include "Periodic.h"

using namespace std;

int main() {
    int choice;
    string value;
    Periodic x;
    
    do {
        cout << "1. Search by Atomic Number\n2. Search by Abbreviation\n3. Quit\n";
        cout << "Choose one: ";
        cin >> choice;
        
        switch (choice) {
            case 1:
                cout << "Enter Atomic Number: ";
                cin >> value;
                x.searchAtomic(value);
                break;
                
            case 2:
                cout << "Enter Abbreviation: ";
                cin >> value;
                x.searchAbbreviation(value);
                break;

            case 3:
                cout << "Quit\n";
                break;
             
            default:
                break;
        }
    } while (choice != 3);

    return 0;
}