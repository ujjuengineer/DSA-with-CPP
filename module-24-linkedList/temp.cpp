#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;

    // constructor
    Node(int val){
        this->val = val;
        this->next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    LinkedList(){
        head = tail = NULL;
        size = 0;
    }

    // insertAtEnd
    void insertAtEnd(int val){
        Node* temp = new Node(val);
        if(size==0) head = tail = temp;
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    // insertAtIndex
    void insertAtIndex(int idx, int val) {
        Node* temp = new Node(val);
        Node* t = head;
        for(int i = 1; i<=idx-1; i++) t = t->next;
        temp->next = t->next;
        t->next = temp;
        size++;
    }

    // get element 
    int getAtIdx(int idx){
        Node* temp = head;
        if(idx < 0 || idx > size-1) {
            cout <<"invalid index" << endl;
            return -1;
        }
        for(int i = 0; i<idx; i++) temp = temp->next;
        return temp->val;
        
    }

    void display(){
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val <<" ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtEnd(40);

    ll.insertAtIndex(2,25);

    ll.display();
    cout << ll.getAtIdx(4);
}