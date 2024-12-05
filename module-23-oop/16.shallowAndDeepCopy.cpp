// shallow and deep copy

// shallow copy
/*
let we have an object obj1 and it has some value v1 and v2.
let we have an second object obj2, which is empty.
if we do obj2 = obj1, it is creating a shallow copy of obj1 inside obj2, in a shallow copy, 

if you change the value of the dynamically allocated data in the first object, the change will also be reflected in the second object. This is because both objects share the same memory for the dynamically allocated data. They point to the same memory address.
 */

#include<iostream>
using namespace std;

class hello {
    public:
    int a;
    int b;

    // constructor
    hello (int a, int b) {
        this -> a = a;
        this -> b  = b;
    }
};

int main(){
    hello ujjwal(4,5);
    // hello ram = ujjwal; // this create a deep copy
    
    hello ram(ujjwal); // this also create a deep copy
    cout << ram.a << endl;
}