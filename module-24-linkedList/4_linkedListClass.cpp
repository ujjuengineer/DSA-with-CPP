#include<iostream>
using namespace std;
class Node { // user defined data type, just like int is a datatype and int array is a data structure
public: 
    int val;
    Node* Next;

    // constructor
    Node(int val){
        this->val = val;
        this->Next = NULL;
    }
};

class LinkedList{ // user defined data structure
public:
    Node* head; // now head is a node type pointer which can store the address of a node type data
    Node* tail;
    int size;

    // constructor
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // function to add number at end
    void insertAtEnd(int val) {
        Node* temp = new Node(val);
        if(size == 0) tail = head = temp;
        else {
            tail->Next = temp;
            tail = temp;
        }
        size++;
    }


    // function to display the linked list
    void display() {
        Node* temp = head;
        while(temp != NULL){
            cout << temp-> val << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
};


int main(){
    // creating a linked list
    LinkedList ll; // just like a vector, here we have defined a linked list "ll", now we will add the value using our function
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);
    ll.display();

    // similarly we can get the size of the linked list as well
    cout << ll.size << endl;
}