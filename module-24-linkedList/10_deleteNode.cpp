// delete node if idx is not given
#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;

    Node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

void display(Node* head) {
    Node* temp = head;
    while(true){
        cout << temp->val << " ";
        if(temp->next == NULL) break;
        temp = temp->next;
    }
    cout << endl;
}

Node* deletenode(Node* head, Node* target){
    if(target == head) {
        head = head->next;
        return head;
    }
    else{
        Node* temp = head;
        while(temp->next != target) temp = temp->next;
        temp->next = temp->next->next;
        return head;
    }
}

Node* deleteVal(Node* head, int targetVal) {
    if(head->val == targetVal) {
        head = head->next;
        return head;
    }
    else {
        Node* temp = head;
        while(temp->next->val != targetVal) temp = temp->next;
        temp->next = temp->next->next;
        return head;
    }
}

int main() {
    Node* a = new Node(10);
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);
    Node* e = new Node(50);
    Node* f = new Node(60);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    e->next = f;
    
    Node* head = a;
    display(head);
    head = deletenode(head,a); // return head of new node after deleting
    display(head);
    head = deletenode(head,c);
    display(head);


    // deleting using value
    head = deleteVal(head, 50);
    display(head);
}