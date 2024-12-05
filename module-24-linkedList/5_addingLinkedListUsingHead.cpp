// in prev file we have seen how we use tail to add new member in the linked list, but what if we don't have access to the tail, we only have access to the head, then we can use following method
#include<iostream>
using namespace std;

class Node {
public: 
    int val;
    Node* Next;

    // constructor
    Node(int val){
        Node::val = val; // this->val = val;
        Node::Next = NULL;
    }
};

void insertAtEnd(Node* head, int val){
    Node* temp = head;
    Node* t = new Node(val);
    while(temp->Next != NULL){ // it means jab tak address section me null nhi hai tab tak traverse kro
        temp = temp->Next;
    }
    temp->Next = t;
}

void display(Node* head) {
    Node* temp = head;
    while(temp != NULL) {
        cout << temp->val << " ";
        temp = temp->Next;
    }
    cout << endl;
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    a->Next = b;
    b->Next = c;
    c->Next = d;
    // in this situation we don't have access to the tail node, so we will use head node 
    insertAtEnd(a,50);

    // now we can get the linked list as
    display(a);
}