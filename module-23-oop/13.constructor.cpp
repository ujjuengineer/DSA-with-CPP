/*
constructors exist by default in the compiler, whenever we declare any class, at that time usko memory
allocation nhi hoti, wo bas structure ban jata hai, but as soon we construct any object of that class
then constructor memory allocation kr deti hai uss object ki
note that constructors are very similar to a function, but it is hidden

jav jav object bnega constructor ko call jaaega, we can even create a default constructor as follow
 */

#include<iostream>
using namespace std;

class bike {
    public:
    int tyre;

    // constructor function humesha same class ka return krta hai, i.e., class bike ka constructor function bike type hi return krega, and also constructor function ka koi naam nhi hota hai
    bike () {
        // let write something so that we will get to know ye function call hua hai
        cout << "function call hua hai" << endl;
    }
};

int main() {
    // let create a object and run the code, and let see if constructor function is getting call or not
    bike tvs;

    // if you run this code, you will get an output as "function call hua" , it means by default constructor function ko call jata hai whenever we create an object
}