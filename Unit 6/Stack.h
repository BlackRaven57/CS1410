#ifndef Stack_h
#define Stack_h

#include <stdio.h>
#include <iostream>
using namespace std;

struct Node{
    string data;
    Node *next;
};

class Stack{
public:
Stack(); // Constuctor create empty stack
~Stack(); // Delete object
void push(string data); // Add to stack
void pop(); // Remove top value
string peak(); // See top value
bool isEmpty();
friend ostream &operator <<(ostream &, const Stack &);
     
private:
Node *top;

};

#endif

Stack::Stack(){
    top = nullptr;
}

Stack::~Stack(){
    while(!isEmpty()){
        pop();
    }
}

void Stack::push(string data){
    Node *toAdd = new Node;
    toAdd ->data = data;
    toAdd->next = nullptr;

    if (top == nullptr) {
        top = toAdd;
        toAdd->next = nullptr;
    }
    else {
        toAdd->next = top;
        top = toAdd;        
    }    
}

string Stack::peak(){
    return top->data;
}

void Stack::pop(){
    if(isEmpty()){
        Node *temp = top;
        top = top->next;
        delete temp;
    }
}
bool Stack::isEmpty(){
    return(top==nullptr);
}

ostream &operator <<(ostream & out, const Stack &s){
    Node *curr = s.top;
    while(curr != nullptr){
        out<< curr->data <<" ";
        curr = curr->next;
        
    }
    return out;
}