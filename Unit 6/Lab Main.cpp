#include <iostream>
#include "Stack.h"

using namespace std;

int main() {
    cout << "Stack implemented with a Linked List" << endl;
    Stack stack;
    stack.push("Buffalo Chicken Mac & Chicken");
    stack.push("Ice Cream");
    stack.push("Cheesecake");
    stack.push("Lemonade");
    stack.push("Pizza");
    stack.push("Frosted Strrawberry Lemonade");
    stack.push("Breakfast");
    stack.push("Bacon");
    stack.push("Steak");
    stack.push("Eggs Benedit");
    stack.push("Ice Water");
    
    cout<< stack << endl;
    for(int i = 0; i < 4;i++){
        stack.pop();
    }
    
    cout<< stack << endl;

    return 0;
}