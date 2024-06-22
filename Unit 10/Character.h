#pragma once
#include <iostream>
using namespace std;

class Character {
    public:
	Character(string cName, int cImportance, int cSword): name(cName), importance(cImportance), swordSkills(cSword) {}
    virtual void adventure();
    virtual void train();
	friend ostream &operator<<(ostream &out, const Character &a);

    protected:
	string name;
    int importance;
    int swordSkills;
};

ostream &operator<<(ostream &out, const Character &a) {
	out << "Character: " << a.name << endl << "Importance: " << a.importance << endl << "Sword Skill Level: " << a.swordSkills << endl;
	return out;
}

void Character::adventure() {
    if (importance > 8 || swordSkills > 6) {
        cout << "You're adventure was a massive success! Well done!\n\n\n";
    }
    else if (importance > 4 || swordSkills > 4) {
        cout << "Good job! You're adventure was a success!\n\n\n";
    }
    else {
        cout << "Whew, that was a close one. Maybe train more before going on another adventure.\n\n\n";
    }
}

void Character::train() {
    cout << "You've updgraded you're sword skills!" << endl;
    swordSkills++;
    cout << "Sword Skill Level: " << swordSkills << endl;
}
