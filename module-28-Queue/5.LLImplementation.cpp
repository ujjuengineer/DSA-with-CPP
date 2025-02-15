#include<iostream>
using namespace std;

class node {
    public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        next = NULL;
    }
};

class Queue {
public:
    node* head;
    node* tail;
    int size;

    Queue() {
        head = tail = NULL;
        size = 0;
    }

    /*
        push : add element at back
        pop : remove element from front
        front : access element from front
        size : give the size of the queue
        empty : give true if queue is empty else false
        back : access element from back (special feature in cpp)
    */
    void push (int val) {
        node* temp = new node(val);
        if (size == 0) {
            head = tail = temp;
            head->next = tail;
        }
        else {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }

    void pop() {
        if (head == NULL) {
            cout << "Queue is empty!" << endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete temp;
        size--;
    
        if (head == NULL) { // If last element is removed, reset tail
            tail = NULL;
        }
    }

    int front() {
        if (head == NULL) {
            cout << "Queue is empty" <<endl;
            return -1;
        }
        return head->val;
    }

    int back() {
        if (tail == NULL) { // If queue is empty, return -1
            cout << "Queue is empty" << endl;
            return -1;
        }
        return tail->val;
    }


    bool empty() {
        if (head == NULL) {
            return true;
        }
        else return false;
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
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.display();
    
    cout <<"front is : "<< q.front() << endl;
    cout << "back is : " << q.back() << endl;
    cout << "size of the queue : " << q.size << endl;

    q.pop();
    cout <<"front is : "<< q.front() << endl;
    cout << "back is : " << q.back() << endl;
    cout << "size of the queue : " << q.size << endl;

}

