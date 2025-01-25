#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* Next; // it will store the address of Node datatype

    // constructor
    Node(int val) {
        this->val = val;
        this->Next = NULL; // initialised every adress as 0x0
    }
};

int main() {
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    Node e(50);

    a.Next = (&b);
    b.Next = (&c);
    c.Next = (&d);
    d.Next = &e;

    // now we can access value of b using a and value of c using b and so on 
    // note that node* next is a pointer, so a.Next , b.Next is also a pointer
    
    cout << (*(a.Next)).val << endl;

    /* 
        a.next pe b ka address pda hai, so *(a.next) krne pe humlog object b pe pahuch gye, now b ka value print krna hai so 
        *(a.next).val use kr ke print krwa denge
    */

    // easy way to use is we can use "->" 
    cout << a.Next->val << endl; // means a.Next pointer me ka value de do
    cout << endl;

    // now similarly we can access the value of c and d using a
    cout << a.Next -> Next -> val << endl; 
    // it means, a.Next use kr ke b pe gya and b ke Next ko use kr k c ke val pe gya

    cout << a.Next -> Next -> Next -> val << endl; // d ka value print krwa rha hai


    // we can also use dreference operator for accessing the value of b
    cout << (*((*((*(a.Next)).Next)).Next)).val << endl;

    /*
        (a.Next) ye tumhara b ka address hai
        (*(a.Next)) ye tumhara b hai
        (*(a.Next)).Next ye tumhara c ka address hai
        (*((*(a.Next)).Next)) ye tumhara c ho gya
        (*((*(a.Next)).Next)).Next ye tumhara d ka address ho gya
        *((*((*(a.Next)).Next)).Next) ye tumhara d ho gya
        (*((*((*(a.Next)).Next)).Next)).val ye tumhara d ka value ho gya
    */

    // printing linked list using loop
    cout << endl;
    Node temp = a;
    while(true) {
        cout << temp.val << " ";
        if(temp.Next == NULL) break; // breaking condition
        temp = *(temp.Next); // temp.next me b ka address hai, *(temp.next) b hai, so temp me ab b daal diye
    }
}