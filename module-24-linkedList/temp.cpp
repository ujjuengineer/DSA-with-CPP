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

class LinkedeList {
    public:
    Node* head;
    Node* tail;
    int size;

    LinkedeList(){
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val){
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->Next = temp;
            tail = temp;
        }
        size++;
    }

    void insertAtHead(int val){
        Node* temp = new Node(val); 
        if(size == 0) head = tail = temp; 
        else {
            (*temp).Next = head;
            head = temp; 
        }
        size++; 
    } 
    // 0 1 2 3 4 5 6 7 8
    // i = 2
    void insertAtIdx (int val, int idx) {
        if(idx == 0) insertAtHead(val);
        else if(idx == size) insertAtTail(val);
        else {
            Node* temp = new Node(val); 
            Node* h = head;
            for(int i = 0; i<idx-1; i++){
                h = h->Next;
            }
            temp->Next = h->Next;
            h->Next = temp;
            size++;
        }
    }
    
    void display(){
        Node* temp = this->head;
        while(temp != NULL) {
            cout << temp->val <<", ";
            temp = temp->Next;
        }
        cout << endl;
    }

    void getAtIdx(int idx) {
        if(idx >= size) {
            cout<< "invalid idx" << endl;
            return;
        }
        Node* temp = this->head;
        for(int i=1; i<=idx; i++){
            temp = temp->Next;
        }
        cout<< temp->val <<endl;
    }

};

int main() {
    LinkedeList ll;
    ll.insertAtIdx(5,0);
    ll.insertAtIdx(4,0);
    ll.insertAtIdx(3,0);
    ll.insertAtIdx(2,0); 
    ll.insertAtIdx(1,0);
    ll.insertAtIdx(0,0);
    ll.insertAtIdx(63,1);
    ll.display();

    ll.getAtIdx(6);
}