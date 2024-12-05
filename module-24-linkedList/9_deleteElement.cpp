#include<iostream>
using namespace std;

class Node {
public: 
    int val;
    Node* Next;

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

    LinkedList(){
        head = tail = NULL;
        size = 0;
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

    // insertAtTail
    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->Next = temp;
            tail = temp;
        }
        size++;
    }

    // insertAtIdx
    void insertAtIdx(int val, int idx) {
        Node* temp = new Node(val);
        if(idx < 0 || idx > size) cout << "ERROR";
        else if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else {
            Node* t = head;
            for(int i = 1; i<=idx-1; i++) t = t->Next;
            temp->Next = t->Next;
            t->Next = temp;
            size++;
        }
    }


    // deleteAtHead
    void deleteAtHead(){
        if(size==0) cout << "ERROR" << endl;
        else {
            head = head->Next;
            size--;
        }
    }

    // deleteAtTail
    void deleteAtTail(){
        if(size == 0) cout << "ERROR"<< endl;
        else{
            Node* temp = head;
            while (temp->Next != tail) temp = temp->Next;
            temp->Next = NULL;
            tail = temp;
            size--;
        }
    }

    // deleteAtIdx 
    void deleteAtIdx(int idx) {
        if(idx < 0 || idx >= size) cout << "ERROR" << endl;
        else if(size == 0) cout <<"linked list is empty" << endl;
        else if(idx == 0) deleteAtHead();
        else if(idx == size-1) deleteAtTail();
        else {
            Node* temp = head;
            for(int i = 1; i<=idx-1; i++) temp = temp->Next;
            temp->Next = temp->Next->Next;
            size--;
        }
    }

    // display
    void display(){
        Node* temp = head;
        while(temp != NULL) {
            cout << temp->val << " ";
            temp = temp->Next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtHead(20);
    ll.insertAtHead(10);
    ll.display();
    ll.insertAtTail(40);
    ll.display();
    ll.insertAtIdx(30,2);
    ll.display();
    ll.insertAtIdx(50,4);
    ll.display();
    ll.deleteAtIdx(2);
    ll.display();
}