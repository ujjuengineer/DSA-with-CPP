/*
    when a function of base class is redefined in it's derived class, it's called function overriding.
    -> Accessing through scope resolution operator
    -> Accessing through pointers
*/

#include<iostream>
using namespace std;

// A
class parent {
    private : 
    int aKaPrivate;

    public:
    int aKaPublic;

    void show() {
        cout << "mai parent ka show hu \n";
    }
};

// B
class child : public parent {
    public:
    int bKaPublic;

    void show() {
        cout << "aham child ka show asmi \n";
    }

    // since b is derived class of A, so B already have show function, but here we have again defined a show function inside the B, this is called function overriding.
    // Now B have both, its  own show function and A ka inherited show funciton.
};

int main(){
    child ujjwal;

    ujjwal.show();
    ujjwal.parent::show();// using scope resolution operator we can access inherited show function of B

    /*
    accessing through pointer : 
        if we have an int pointer, it can only store int address, if we have char pointer then it can store char address, 
        
        but in case of class, a parent's pointer can store the address of child class as well !
    */

    cout << endl << endl;

    child car; // child object
    parent* ptr; // parent type pointer
    ptr = &car; // parent pointer storing child address

    ptr->show(); // since ptr me child ka address hai, so ye child ke show ko call krne chahiye tha, but it is calling the parent ka show
    // this can be solved using virtual function

    
    
    // what is the type of ptr ? child or parent
    // Compiler POV : parent type ka hai, as per the defination of the ptr
    // Runtime pov : child type ka hai, as it is storing the address of child

    // this can be solved using virtual function
}