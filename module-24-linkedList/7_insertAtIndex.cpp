#include<iostream>
using namespace std;

class Node{
public:
    int val;
    Node* Next;

    // constructor
    Node(int val){
        this->val = val;
        this->Next = NULL;
    }
};

class LinkedList{
public:
    Node* head;
    Node* tail;
    int size;

    // constructor
    LinkedList(){ // jav v koi linked list bnega to 0 size ka hoga starting me
        head = tail = NULL;
        size = 0;
    }

    // insertAtTail
    void insertAtTail(int val){
        Node* t = new Node(val);
        if(size == 0) head = tail = t;
        else {
            tail->Next = t;
            tail = tail->Next; // or we can do tail = t; both means the same
        }
        size++;
    }

    // insertAtHead
    void insertAtHead(int val) {
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            temp->Next = head;
            head = temp;
        }
        size++;
    }

    void insertAtIndex(int idx, int val) {
        
        if(idx==0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else {
            Node* temp = new Node(val);
            Node* t = head; 
            
            // ab is t ko idx-1 tak le kr jana hai so that idx pr humlog insert kr ske, to hum idx-1 times loop chla denge
            for(int i = 1; i<=idx-1; i++) t = t->Next;

            temp->Next =  t->Next; // t abhi idx-1 pe tha, usme idx ka address tha, so humne temp me idx ka address daal diya, ab idx-1 me temp ka address daal denge
            t->Next = temp;
            size++;
        }
    }

    void display(){
        Node* temp = head;
        while(temp != NULL){
            cout << temp->val <<" ";
            temp = temp->Next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtHead(5);
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);

    ll.display();

    ll.insertAtHead(4);
    ll.insertAtHead(3);

    ll.display();

    // let insert at index 4, abhi index 4 pe 40 hai, let try to insert 7 at index 4
    ll.insertAtIndex(4,7);
    ll.display();
    
    ll.insertAtIndex(0,14);
    ll.display();
}