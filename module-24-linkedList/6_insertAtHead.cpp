#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* Next;

    // constructor
    Node(int val){
        this->val = val;
        this->Next = NULL;
    }
};

class LinkedList {
    Node* head;
    Node* tail;
    int size;

public:
    // constructor
    LinkedList(){
        // initial values, means jese hi koi linked list bna to uska initial value ye hoga
        head = tail = NULL;
        size = 0;
    }

    // function to add at head
    void insertAtHead(int val) {
        Node* temp = new Node(val);
        temp->Next = head;
        head = temp;
        size++;
    }

    // function to display
    void display(){
        Node* temp = head;
        while(temp != NULL) {
            cout << temp-> val <<" ";
            temp = temp->Next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtHead(10);
    ll.insertAtHead(20);
    ll.insertAtHead(30);

    ll.display();

    ll.insertAtHead(40);
    ll.display();
}