// we have already read access specifier, public -> protected -> private
// we can make public to protected and protected to private but can't do the reverse

// syntax of inheriting a parent in child class 
// class <child name> : <access specifier> <parent name> 

#include<iostream>
using namespace std;

class A {
    public : // can be accessed, can be inherited
    int A_ka_public;

    protected: // can't be accessed, can be inherited
    int A_ka_protected;

    private: // can't be accessed, can't be inherited
    int A_ka_private;
};

// now we have a_ka_public and a_ka_protected inside this b
// now if we give access specifier as public, then public data member of a will remain public inside the b and protected remain protected
// now if we give access specifier as protected, then the public data member of a will also become protected inside of b and then can;t be accessed
class B : public A {
    public:
    int B_ka_public;

};

int main() {
    B b;
    b.A_ka_public = 5; 
    cout << b.A_ka_public << endl;
    // here a ka public is easily accessible but a ka protected is not accessible althrough it is inherited inside the b
    // now if you make the access specifier of b as protected, then you can't even access the a ka public, because then all the inherited member become protected, 
    
    // note that public data member can become private or protected but protected cant be public and private can't be protected or public
}