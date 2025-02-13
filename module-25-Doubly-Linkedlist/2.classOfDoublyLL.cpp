#include<iostream>
using namespace std;

class Node {
    public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        Node::val = val;
        Node::next = NULL;
        Node::prev = NULL;
    }
};

class ll {
    public:
    Node* head;
    Node* tail;
    int size;

    ll() {
        head = tail = NULL;
        size = 0;
    }

    void insertAtTail(int val) {
        Node* temp = new Node(val);
        if(size == 0) {
            head = tail = temp;
        }
        else {
            tail->next = temp;
            temp->prev = tail; // extra code compared to singly linkedList
            tail = temp;
        }
        size++;
    }
    void insertAtHead (int val) {
        Node* temp = new Node (val);
        if(size == 0) head = tail = temp;
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }
    void insertAtIdx (int idx, int val) {
        Node* temp = new Node (val);
        Node* t = head;
        if(idx < 0 || idx > size) {
            cout << "ERROR 404"<< endl;
        }
        else {
            if (idx == 0) insertAtHead(val);
            else if (idx == size) insertAtTail(val);
            else {
                for (int i = 1; i<idx; i++) {
                    t = t->next;
                }
                temp->prev = t;
                temp->next = t->next;
                temp->prev->next = temp;
                temp->next->prev = temp;
            }
            size++;
        }
    }

    void display() {
        Node* t = head;
        while (t != NULL) {
            cout << t->val << " ";
            t = t->next;
        }
        cout << endl;
    }
};

int main() {
    ll list;
    list.insertAtTail(10);
    list.insertAtHead(5);
    list.insertAtTail(20); // 5 10 20
    list.insertAtTail(30); // 5 10 20 30
    list.insertAtIdx(2,15); // 5 10 15 20 30

    list.display();

}