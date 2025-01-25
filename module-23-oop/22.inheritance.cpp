#include<iostream>
#include<string>
using namespace std;

class vehicle { // this is called base class or parent class
    public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;

    vehicle() {
        cout << "vehicle ka constructor call hua \n";
    }

    // function
    int getTyreSize(){
        return tyreSize;
    }
};

// if you notice car and bike have very similar data function, so rather than defining them in both the class we can create an anoter class named vehicle and inherit those data function inside of the car and bike by making them child of vehicle


class car : public vehicle { 
    // this means car inherit vehicle or we can say car is a child of vehicle, also called as derived class or child class
    // note that data member k saath saath member function v inherit ho jata hai
    public:
    int sterringSize;

    car(){
        cout << "car ka constructor call hua \n";
    }
};

class bike : public vehicle{
    public:
    int handleSize;
};

int main() {
    // lets create a object of car
    car bmw; // now we can assign all the property inherited by its parents in the same way
             
    bmw.sterringSize = 10;
    bmw.tyreSize = 6;
    cout << endl << bmw.getTyreSize() << endl;
    // note : if you create an object of the child, then it will call the constructor of the parents as well !! if you try to run this code, you will notice the parents constructor is called first

}