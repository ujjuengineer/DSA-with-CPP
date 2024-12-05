// constructor object ko create krta hai, destructor object ko destroy krta hai
/*
destructor kab call hota hai : 
    jab object goes out of the scope, 
    let we have created a object in main fucntion, so main function jese hi kathm hoga wese hi destructor call hoga and uss object ko destroy kr dega to freeup the memory spaces;

*/

#include<iostream>
#include<string>
using namespace std;

class bike {
    public:
    int tyreNumber;
    string tyreName;

    // constructor function
    bike(int tyreNumber, string tyreName) {
        this -> tyreName = tyreName;
        this -> tyreNumber = tyreNumber;
    }
    // destructor fucntion is very similar to constructor function, the difference is isme humlog koi argument pass nhi krte
    ~bike() {
        cout << "destructor call hua" << endl;
    }
};

int main() {
    
    // let construct an object inside a if condition and one inside of main and see whats going on 
    if(1){
        bike tvs(36,"aage ka tyre");
        cout << tvs.tyreNumber << " "<< tvs.tyreName << endl;
    }
    // jese hi if se bahar aae wese hi destructor ko call lgega, to destroy this object as it is not out of scope
    cout << endl << endl;

    bike heroHonda(56, "square tyre");
    cout << heroHonda.tyreNumber << " " << heroHonda.tyreName << endl;

    bike jupiter(63, "circle tyre");
    cout << jupiter.tyreNumber << " " << jupiter.tyreName << endl;
}
// jese hi main function ke bahar aaenge wese hi phir se 2 baar destructor ko call lgega to destroy both the object (jupiter and herohonda) as it is now out of the scope


// output :
// 36 aage ka tyre
// destructor call hua

// 56 square tyre
// 63 circle tyre
// destructor call hua
// destructor call hua