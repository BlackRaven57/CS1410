#include <iostream>
#include "Character.h"
#include "Human.h"
#include "Elf.h"
#include "Dwarf.h"
using namespace std;

/* I hope its okay but I did it based off of the book that I'm writing because I thought that would be fun
   and something that would interest me a little more. It still has all the things it needs I believe and I
   hope it still works and is okay. :) This was a fun assignment though thanks! */

int main() {
    //// CHARACTER
    // Imput then print
    Character carol("Carol", 6, 3);
    cout << carol;
    cout << "She is the main character's mom and she isn't actually human unlike what everyone thinks." << endl;

    // Train
    cout << "\nShe spends some time training to be more help." << endl;
    carol.train();

    // Adventure
    cout << "\nAnd now it's time for adventure." << endl;
    carol.adventure();

    //// ELF
    // Imput then print
    Elf liana("Liana", 7, 6, "wind", 7);
    cout << liana;
    cout << "She is the main character's best friend when they meet in the elf city and has so much that she can teach everyone." <<  endl;

    // Train
    cout << "\nShe spends some time training because she wants to be as good as she can be." << endl;
    liana.train();

    // Magic
    cout << "\nShe spends some time playing with the wind because it's fun." << endl;
    liana.magic();

    // Adventure
    cout << "\nAnd now it's time for adventure." << endl;
    liana.adventure();
    
    //// DWARF
    // Imput then print
    Dwarf john("John", 3, 4, 9);
    cout << john;
    cout << "He isn't very tall but what he lacks in height he makes up for in craftmanship. He is an expert wood worker." << endl;

    // Train
    cout << "\nHe spends some time training because he knows he's not that great at swordfighting." << endl;
    john.train();

    // Craft
    cout << "\nAnd then stops to finish up his wood working project." << endl;
    john.craft();

    // Adventure
    cout << "\nAnd now it's time for adventure." << endl;
    john.adventure();
    
    //// HUMAN
    // Imput then print
    Human aaron("Aaron", 8, 7, 4);
    cout << aaron;
    cout << "He is quite the character and although once shut off and rude he falls in love with the main character and becomes a very nice gentlemen." << endl;

    // Train
    cout << "\nHe spends some time training to make sure he can always protect the people he cares about." << endl;
    aaron.train();

    // Archery
    cout << "\nHe spends some time practicing archery because he knows he needs to work on it." << endl;
    aaron.archery();

    // Adventure
    cout << "\nAnd now it's time for adventure." << endl;
    aaron.adventure();

}