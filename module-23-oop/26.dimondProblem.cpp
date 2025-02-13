// when 2 instances of base class are present in derived class
// B derives A, c derives A, and D derives B + C, now D have two instaces of A, this cause problem, this can be solved using "virtual"

#include <iostream>
using namespace std;

class A {
    public: 
    int A_ka_public; // Public member of class A
};

class B : virtual public A { // Virtual inheritance
    public: 
    int B_ka_public; // Public member of class B
};

class C : virtual public A { // Virtual inheritance
    public: 
    int C_ka_public; // Public member of class C
};

class D : public B, public C { // D inherits from B and C
    public: 
    int d_ka_public; // Public member of class D

    void display() {
        // Accessing A_ka_public is valid because of virtual inheritance
        cout << "Value of A_ka_public: " << A_ka_public << endl;
    }
};

int main() {
    D ujjwal;                // Create an object of class D
    ujjwal.A_ka_public = 50; // Assign a value to A_ka_public
    ujjwal.display();        // Display the value
    return 0;
}
