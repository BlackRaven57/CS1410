#include <iostream>
#include <time.h>
#include "Binary Number.h"
using namespace std;
 
int main() {
    char choice;
    int num;
    string binary;
    BinaryNumber b1(6);
    BinaryNumber b2("11");
    // Binary Value One
    cout << "Binary One\nWould you like to enter a number(n) or a binary number(b)? ";
    cin >> choice;
    if (choice == 'n') {
        cout << "Enter your number: ";
        cin >> num;
        b1.set(num);
    }
    else if (choice == 'b') {
        cout << "Enter your binary number: ";
        cin >> binary;
        b1.set(binary);
    }
    else {
        cout << "Not a valid choice. Entering 6 as Binary One instead.";
    }

    // Binary Value Two
    cout << "\n\nBinary Two\nWould you like to enter a number(n) or a binary value(b)? ";
    cin >> choice;
    if (choice == 'n') {
        cout << "Enter your number: ";
        cin >> num;
        b2.set(num);
    }
    else if (choice == 'b') {
        cout << "Enter your binary number: ";
        cin >> binary;
        b2.set(binary);
    }
    else {
        cout << "Not a valid choice. Entering 3 as Binary Two instead.";
    }

    // Binary Value Three
    BinaryNumber b3 = b1 + b2;

    // Binary Value Four
    BinaryNumber b4 = b2 - b1;

    // Print Binary
    cout << b1 << endl;
    cout << b2 << endl;
    cout << "Binary One + Binary Two\n";
    cout << b3 << endl;
    cout << "Binary Two - Binary One\n";
    cout << b4 << endl;

}