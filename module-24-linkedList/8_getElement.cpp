#include<iostream>
using namespace std;

class Node {
public : 
    int val;
    Node* Next;

    Node(int val){
        this->val = val;
        Next = NULL;
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

    // insertAtTail
    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if(size == 0) head = tail = temp;
        else {
            tail->Next = temp;
            tail = temp;
        }
        size++;
    }

    // getAtIdx
    int getAtIdx(int idx) {
        if(idx < 0 || idx >= size) {
            cout << "invalid index : ";
            return idx;
        }
        else if(idx == 0) return head->val;
        else if(idx == size-1) return tail->val;
        else{
            Node* temp = head;
            for(int i = 1; i<=idx; i++){
                temp = temp->Next;
            }
            return temp->val;
        }
        return -1;
    }
};

int main() {
    LinkedList ll;
    ll.insertAtTail(10);
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.insertAtTail(40);
    ll.insertAtTail(50);
    ll.insertAtTail(60);

    cout << ll.getAtIdx(3); // output = 40 
}