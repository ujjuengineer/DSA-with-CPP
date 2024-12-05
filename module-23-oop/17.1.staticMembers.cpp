// the static keyword is used with a variable to make the memory of the variable satic. once a static variable is declared its memory can't be changed 

// let us first understand it with function
#include<iostream>
using namespace std;

void print1() {
    int x = 5;
    cout << x << endl;
    x++;
}
void print2() {
    static int x = 5; // now this can't be reinitialized even we call this function multiple times
    cout << x << endl;
    x++;
}

int main() {
    // let us call print1 function 3 times and print2 function 3 times and see the difference
    cout << "calling print1 function 3 times" << endl ;
    print1();
    print1();
    print1();
    // output : 5 5 5
    cout << "calling print2 function 3 times " << endl;
    print2();
    print2();
    print2();
    // output : 5,6,7
    // this is because static ek baar initialise ho gya to wo dubara initialise nhi hota, at every call its value will increase
}