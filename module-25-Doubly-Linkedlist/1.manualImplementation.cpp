/*
BENEFITS OF DOUBLY LINKEDLIST
    -> easy to display the ll in reverse order in O(1) space complexity
    -> humlog recursion ko use kr ke singly linkedlist ko reverse print krwa skte h, but recursion me call stack banta hai so O(n) space complexity ho jaaega
    -> if any node is given then we can get head and tail node of the linkedlist
*/
#include<iostream>
using namespace std;
class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void display (Node* head) {
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}

void displayRev (Node* head) {
    while(head->next != NULL) head = head->next;
    while (head != NULL) {
        cout << head->val <<" ";
        head = head->prev;
    }
    cout << endl;
}

int main () {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);

    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;

    e->prev = d;
    d->prev = c;
    c->prev = b;
    b->prev = a;

    display(a);
    displayRev(a);
}