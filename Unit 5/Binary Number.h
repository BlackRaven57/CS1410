#pragma once
#include <iostream>
#include <bitset>
using namespace std;

class BinaryNumber {
    public:
    BinaryNumber() {
        this->number = 0;
        this->binary = "0";
    }

    BinaryNumber(string string) {
        this->binary = string;
        this->number = bitset<8>(string).to_ullong();
    }

    BinaryNumber(int i) {
        this->number = i;
        this->binary = bitset<8>(i).to_string();
    }

    BinaryNumber set(string string) {
        this->binary = string;
        this->number = bitset<8>(string).to_ullong();
        return NULL;
    }
    
    BinaryNumber set(int i){
        this->number = i;
        this->binary = bitset<8>(i).to_string();
        return NULL;
    }

    BinaryNumber operator+(BinaryNumber b) {
        int newNum = number + b.getNumber();
        BinaryNumber b3(newNum);
        return b3;
    }

    BinaryNumber operator-(BinaryNumber b) {
        int newNum = number - b.getNumber();
        BinaryNumber b3(newNum);
        return b3;
    }

    friend ostream& operator<< (ostream& os, BinaryNumber& b) {
        os << "Number: " << b.getNumber() << "\nBinary Form: " << b.getBinary() << endl;
        return os;
    }

    int getNumber() {
        return this->number;
    }

    string getBinary() {
        return this->binary;
    }

    private:
    string binary;
    int number;
};