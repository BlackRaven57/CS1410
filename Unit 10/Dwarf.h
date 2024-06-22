#pragma once
#include "Character.h"
#include <iostream>
using namespace std;

class Dwarf: public Character {
    public:
	Dwarf(string cName, int cImportance, int cSword, int cCraft): Character(cName, cImportance, cSword), craftSkills(cCraft) {}
    void adventure();
    void train();
    void craft();
	friend ostream &operator<<(ostream &out, const Dwarf &a);

    private:
	int craftSkills;
};

ostream &operator<<(ostream &out, const Dwarf &a) {
	out << "Character: " << a.name << "\nImportance: " << a.importance << "\nSword Skill Level: " << a.swordSkills << "\nCraft Skill: " << a.craftSkills <<  endl;
	return out;
}

void Dwarf::adventure() {
    if (importance > 9 || swordSkills > 6) {
        cout << "You're adventure was a massive success! Well done!\n\n\n";
    }
    else if (importance > 6 || swordSkills > 4) {
        cout << "Good job! You're adventure was a success!\n\n\n";
    }
    else {
        cout << "Whew, that was a close one. Maybe train more before going on another adventure.\n\n\n";
    }
}

void Dwarf::train() {
    Character::train();
}

void Dwarf::craft() {
    cout << "That's quite an amazing piece! Beautiful craftmanship! You've upgraded you're craft skills!" << endl;
    craftSkills++;
    cout << "Craft Skill: " << craftSkills << endl;
}
