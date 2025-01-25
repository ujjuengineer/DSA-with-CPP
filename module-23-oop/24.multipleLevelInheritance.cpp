// a ka child b -> b ka child c -> multiple level inheritance 

#include<iostream>
using namespace std;

class A {
public : // can be accessed, can be inherited
    int A_ka_public;

protected: // can't be accessed, can be inherited
    int A_ka_protected;

private: // can't be accessed, can't be inherited
    int A_ka_private;

public:
    // constructor for a
    A () {
        cout << "a ka constructor call hua \n";
    }
};

class B : protected A { // a ka public, a ka protected aaega, both as protected
public:
    int B_ka_public;

public:
    // constructor for B
    B (){
        cout << "b ka constructor call hua \n";
    }

};

class C : public B { // b ka public aaega as public, a ka public and a ka protected aaega as protected as they were protected inside Bs 
public: 
    int C_ka_public;

public:
    // constructor for a
    C (){
        cout << "c ka constructor call hua \n";
    }
};

int main() {
    C c;
    // you can access c ka public, b ka public from here

    // note that as soon we created an object of class C, to peehle parents ka constructor call hota hai, uske baad child, 
    // try to run this code and notice the constructor call
}