#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* Next;

    // constructor
    Node(int val){
        this->val = val;
        this->Next = NULL;
    }
};

int main() {
    Node* a = new Node(10); // this basically created a new object of Node which don't have any name, it can be accessed using *a 
    Node* b = new Node(20);
    Node* c = new Node(30);
    Node* d = new Node(40);

    // cout << (*a).val << endl; or we can do
    cout << a->val << endl;

    a->Next = b;  // (*a).Next = b; means a ke next data member me b ka address daal diya
    b->Next = c; // similarly b ke next wale data member me c ka address daal diya
    c->Next = d;

    // now we can access this using loop
    Node* temp = a; // a me basically address tha tumhara new node(10) ka, so ab temp me daal diya
    while(temp != NULL) {
        cout << temp->val <<" "; // it means (*temp).val print krna hai
        temp = temp->Next;
    }
}