#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

class Periodic {
public:
    void searchAtomic(string num) {
        cout << "\n";
        fstream fin("C:/Users/moore/OneDrive - Davis School District/School/NUAMES/Junior/CS 1410/Code Files/Unit 9/elements.csv", ios::in);
        string number, name, symbol, mass;
        while (fin) {
            getline(fin, number, ',');
            getline(fin, name, ',');
            getline(fin, symbol, ',');
            getline(fin, mass, '\n');
            if (number == num) {
                cout << "Number: " << number << endl;
                cout << "Name: " << name << endl;
                cout << "Symbol: " << symbol << endl;
                cout << "Mass: " << mass << endl;  
            }
        }
        cout << endl;
        fin.close();
    }
    
    void searchAbbreviation(string input) {
        cout << endl;
        fstream fin("C:/Users/moore/OneDrive - Davis School District/School/NUAMES/Junior/CS 1410/Code Files/Unit 9/elements.csv", ios::in);
        string number, name, symbol, mass;
        while (fin) {
            getline(fin, number, ',');
            getline(fin, name, ',');
            getline(fin, symbol, ',');
            getline(fin, mass, '\n');
            if(symbol == input){
                cout << "Number: " << number << endl;
                cout << "Name: " << name << endl;
                cout << "Symbol: " << symbol << endl;
                cout << "Mass: " << mass << endl;
            }
        }
        cout << endl;
        fin.close();
    }
};