#pragma once
#include "Character.h"
#include <iostream>
using namespace std;

class Human: public Character {
    public:
	Human(string cName, int cImportance, int cSword, int cSkill): Character(cName, cImportance, cSword), archerySkill(cSkill) {}
    void adventure();
    void train();
    void archery();
	friend ostream &operator<<(ostream &out, const Human &a);

    private:
	int archerySkill;
};

ostream &operator<<(ostream &out, const Human &a) {
	out << "Character: " << a.name << endl << "Importance: " << a.importance << endl << "Sword Skill Level: " << a.swordSkills << "\nArchery Skill: " << a.archerySkill << endl;
	return out;
}

void Human::adventure() {
    if (importance > 8 || swordSkills > 7 || archerySkill > 6) {
        cout << "You're adventure was a massive success! Well done!\n\n\n";
    }
    else if (importance > 4 || swordSkills > 5 || archerySkill > 5) {
        cout << "Good job! You're adventure was a success!\n\n\n";
    }
    else {
        cout << "Whew, that was a close one. Maybe train more before going on another adventure.\n\n\n";
    }
}

void Human::train() {
    Character::train();
    cout << "You've also upgraded you're archery skills!" << endl;
    archerySkill++;
    cout << "Archery Skill: " << archerySkill << endl;
}

void Human::archery() {
    cout << "Nice practing! You're aim is much better!" << endl;
    archerySkill++;
    cout << "Archery Skill: " << archerySkill << endl;
}
