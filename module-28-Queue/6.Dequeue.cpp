// introduction to deque : doubly ended queue
/*
        addFront()
        addRear()
        getFront()
        getRear()
        deleteFront()
        deleteRear()
        size()
    */
#include<iostream>
using namespace std;

class node{
    public:
    int val;
    node* prev;
    node* next;

    node(int val) {
        node::val = val;
        prev = next = NULL;
    }
};

class Deque{
    public:
    node* head;
    node* tail;
    int size;

    Deque() {
        head = tail = NULL;
        size = 0;
    }

    void addRear(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
            head->next = tail;
            tail->prev = head;
        }
        else {
            tail->next = temp;
            temp->prev = tail;
            tail = temp;
        }
        size++;
    }

    void addFront(int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
            head->next = tail;
            tail->prev = head;
        }
        else {
            temp->next = head;
            head->prev = temp;
            head = temp;
        }
        size++;
    }

    int getFront() {
        if (size == 0) {
            cout << "Deque is empty !!";
            return -1;
        } 
        return head->val;
    }

    int getRear() {
        if (size == 0) {
            cout << "Deque is empty !!";
            return -1;
        } 
        return tail->val;
    }

    void deleteFront() {
        if (size == 0) {
            cout << "Deque is empty !!" << endl;
            return;
        }
        
        node* temp = head;
        head = head->next;
        head->prev = NULL;
        delete temp;
    }

    void deleteRear() {
        if (size == 0) {
            cout << "Deque is empty !!" << endl;
            return;
        }
        node* temp = tail;
        tail = tail->prev;
        tail->next = NULL;
        delete temp;
    }

    void display() {
        node* temp = head;
        while (temp) {
            cout << temp->val <<" ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {

    Deque de;

    cout << de.getFront() << endl;
    cout << de.getRear() << endl;
    de.deleteFront();
    de.deleteRear();

    de.addRear(30);
    de.addFront(20);
    de.addFront(10);
    de.addRear(40);

    de.display();

    cout <<"front : "<< de.getFront() << endl;
    cout <<"rear : "<< de.getRear() << endl;
    de.deleteFront();
    de.deleteRear();
    cout <<"new front : "<< de.getFront() << endl;
    cout <<"new rear : "<< de.getRear() << endl;
}