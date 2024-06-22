#ifndef Queue_hpp
#define Queue_hpp

#include <iostream>
using namespace std;
template<class Type>
struct Node {
    Type data;
    Node *next;
};
template <class Type>
class Queue;

template <class Type>
ostream &operator << (ostream &, const Queue<Type> &);

template <class Type>
class Queue{
public:
    // Constructs an empty queue
    Queue();
    // Destructor to free up memory
    ~Queue();
    // Returns true if the stack is empty
    bool isEmpty();
    // Adds an item to the end of the queue
    void add(Type data);
    // Removes the item at the bottom of the queue
    void remove();
    // Returns the value in the front of the queue (without removing)
    Type peek();
    // Overloads the extraction operator to display the queue
    friend ostream &operator << <>(ostream &out, const Queue<Type> &s);

    private:
    Node<Type> *top;
    Node<Type> *bottom;
};

#endif

template <class Type>
Queue<Type>::Queue(){
    top = nullptr;
    bottom = nullptr;
}

template <class Type>
Queue<Type>::~Queue(){
    while(!isEmpty()){
        remove();
    }
}

template <class Type>
bool Queue<Type>::isEmpty(){
    return(top == nullptr);
}

template <class Type>
void Queue<Type>::add(Type data){
    Node<Type> *add = new Node<Type>;
    add -> data = data ;
    add -> next = nullptr;
    
    if (top == nullptr){
        top = add;
        bottom = add;
        add -> next = nullptr;
    }
    else {
        bottom -> next = add;
        bottom = add;
    }
}

template <class Type>
void Queue<Type>::remove(){
    if (!isEmpty()) {
        Node<Type> *temp = top;
        top = top->next;
        delete temp;
    }
    
}

template <class Type>
Type Queue<Type>::peek(){
    return top -> data;
}

template <class Type>
ostream &operator << (ostream & out, const Queue<Type> &s){
    Node<Type> *curr = s.top;
    while (curr != nullptr) {
        out << curr->data << " ";
        curr = curr->next;
    }
    return out;
}