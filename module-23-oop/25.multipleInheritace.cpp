#include<iostream>
using namespace std;

class A {
    private:
    int A_ka_private;
    public:
    int A_ka_public;
};

class B {
    public :
    int B_ka_public;
};

// this is called multiple inheritance, where a single child have multiple parents
class C : public A, public B {
    public : 
    int C_ka_public;

    // this class have following data members : a ka public, b ka public, and it's own c ka public
};

int main() {
    C ujjwal;
    ujjwal.C_ka_public = 45;
    ujjwal.A_ka_public = 48;
    ujjwal.B_ka_public = 43;

    cout << ujjwal.C_ka_public << endl << ujjwal.A_ka_public << endl << ujjwal.B_ka_public << endl;

}