#include<iostream>
using namespace std;

class Node { // user defined data type
public:
    int val;
    Node* Next;

    // constructor
    Node(int val){
        this-> val = val;
        this->Next = NULL;
    }
};

class LinedeList { // user defined data structure
    Node* head;
    Node* tail;
    int size;
};

// function to print the linked list 
void display(Node* head) {
    Node* temp = head;
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->Next;
    }
    cout << endl;
}

// using similar loop, we can find the size of the linked list 
int size(Node* head) {
    Node* temp = head;
    int n = 0;
    while(temp != NULL) {
        n++;
        temp = temp->Next;
    }
    return n;
}

// we can print linked list using recursion 
void recursiveDisplay(Node* head) {
    // base case
    if(head == NULL) return;
    
    cout << head->val << " "; // kaam
    recursiveDisplay(head->Next); // call

    // recursive call is mailny used to display the linkedlist in reverse order, we can just interchange kaam and call, then the linked list will be printed in reverse order
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->Next = b;
    b->Next = c;
    c->Next = d;

    display(a);

    cout << "the size of the linked list is : " << size(a) << endl;

    recursiveDisplay(a);

    // note that the iterative call is better than the recursive call because in recursive call, call stack ban rha hai, so the space complexity become O(n), but in iterative call the spac cmlxity is O(1)
}