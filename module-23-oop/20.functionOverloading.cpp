/*
The word "polymorphism" comes from Greek, meaning "many forms." In programming, polymorphism means that the same function, operator, or object can behave differently in different contexts. It's like how a single word can have different meanings depending on the situation.
*/
// two type of polymorphism  -> 1. compile time 2. run time
// compile time are of 2 type : function overloading and operator overloading
// run time -> function overiding


// function overloading : creating function with same name but different parameters

// we can create 2 functions with same name if their parameters are different

#include<iostream>
#include<math.h>
using namespace std;

// this will calculate area of rectangle
void calculateArea(int l, int b) {
    cout << l*b << endl;
}
// calculate area of square
void calculateArea(int l) {
    cout << l*l << endl;
}
// area of circle
void calculateArea(double r) { // see yaha pe parameter ka type different hai so this will also count as differnt parameter
    cout << M_PI * r * r << endl;
}
int main () {
    calculateArea(5.0); // the input is double so it will return the area of circle
}

// this was the example of function overloading