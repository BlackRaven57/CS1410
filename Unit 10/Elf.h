#pragma once
#include "Character.h"
#include <iostream>
using namespace std;

class Elf: public Character {
    public:
	Elf(string cName, int cImportance, int cSword, string cElement, int cSkill): Character(cName, cImportance, cSword), element(cElement), elementSkill(cSkill) {}
    void adventure();
    void train();
    void magic();
	friend ostream &operator<<(ostream &out, const Elf &a);

    private:
	string element;
    int elementSkill;
};

ostream &operator<<(ostream &out, const Elf &a) {
	out << "Character: " << a.name << "\nImportance: " << a.importance << "\nSword Skill Level: " << a.swordSkills << endl;
    out << "Element: " << a.element << endl << "Element Skill: " << a.elementSkill << endl;
	return out;
}

void Elf::adventure() {
    if (importance > 6 || swordSkills > 6 || elementSkill > 5) {
        cout << "You're adventure was a massive success! Well done!\n\n\n";
    }
    else if (importance > 3 || swordSkills > 4 || elementSkill > 3) {
        cout << "Good job! You're adventure was a success!\n\n\n";
    }
    else {
        cout << "Whew, that was a close one. Maybe train more before going on another adventure.\n\n\n";
    }
}

void Elf::train() {
    Character::train();
    cout << "You've also upgraded you're element skills!" << endl;
    elementSkill++;
    cout << "Element Skill: " << elementSkill << endl;
}

void Elf::magic() {
    cout << "You've learned a new spell and upgraded your element skills!\n";
    elementSkill++;
    cout << "Element Skill: " << elementSkill << endl;
}
