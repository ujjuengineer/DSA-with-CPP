// we can even set the value of the object using constructor function

#include<iostream>
using namespace std;

class bike {
    public:
    int tyreNumber;
    string tyreName;


    // you can even give default value in this parameters
    bike (int tyreNumber, string tyreName) {
        // let write something so that we will get to know ye function call hua hai
        this -> tyreNumber = tyreNumber;
        bike::tyreName = tyreName;
        cout << "function call hua hai" << endl;
    }
};

int main() {
    
    // constructed a object and set its value using constructor function
    bike tvs(4,"piche wala tyre");

    cout << tvs.tyreNumber << endl << tvs.tyreName << endl;

    // if you run this code, you will get an output as "function call hua" , it means by default constructor function ko call jata hai whenever we create an object
}