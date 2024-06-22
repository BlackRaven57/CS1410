#include <iostream>
#include "Queue.h"

using namespace std;

int main() {
    cout << "Queue implemented with a Linked List" << endl;
    Queue<string> myQueue;
    
    myQueue.add("Buffalo Chicken Mac & Chicken");
    myQueue.add("Ice Cream");
    myQueue.add("Cheesecake");
    myQueue.add("Lemonade");
    myQueue.add("Pizza");
    myQueue.add("Frosted Strrawberry Lemonade");
    myQueue.add("Breakfast");
    myQueue.add("Bacon");
    myQueue.add("Steak");
    myQueue.add("Eggs Benedit");
    myQueue.add("Ice Water");
    
    cout<< myQueue << endl;
    for(int i = 0; i < 4; i++){
        myQueue.remove();
    }
    
    cout<< myQueue << endl;
    
    Queue<int> myIntQueue;
    myIntQueue.add(1);
   
    for(int i = 0; i < 10; i++){
        myIntQueue.add(i); 
    }

    cout << myIntQueue <<endl;    
    return 0;
}