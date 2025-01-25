// let understand the static member with class data member
#include<iostream>
using namespace std;

class bike {
    private:
    static int numberOfBike; // since we have declared it as static, now its belong to this class, its value can't be changed using the object of the bike, it is a private member of bike
    
    

    public: 
    // seter
    static void setNumOfBike(int x) { 
        numberOfBike = x;
        // no need to do this->numberOfbike as the name is different;
    } 
    // we can also create a static function here to access the satic data member, but we should always keep in mind that a static function can only access static data member whereas a non-static member can access static as well as non static member

    // geter
    int getnumberOfBike() {
        return numberOfBike;
    }

};

/*
To set the value of a static data member, you typically do this outside the class 
definition because static members are defined separately from the objects of the 
class. 
*/
int bike :: numberOfBike = 3; 
// now we can create a function inside the class to modify the value of this static data member

/*
Access and Modification:
Using Class Name: MyClass::count directly modifies or accesses the static member.
Using Object: Objects (obj1, obj2) can also access and modify the static member, but all objects refer to the same count. */

int main() {
    bike royalEnfield; // now this royalenfield should have 3 value, numberofbike, numoftyre and size, but since number of bike is static, its value can't be changed, it will remain same for all the object
    bike tvs;
    
    // let see what is the initial number of bike 

    cout << "the initial number of bike \nroyal enfield : " << royalEnfield.getnumberOfBike() << ", tvs : " << tvs.getnumberOfBike()<< endl;


    royalEnfield.setNumOfBike(5);
    // now let see what is the number of the bike in tvs
    cout << "the number of bike tvs have after changing the number of bike in royalenfied is : " << tvs.getnumberOfBike() << endl;


    // we can also set the numbe of bike using the call name
    //bike::setNumOfBike(10); // but only if setNumOfBike() is a static function
    cout << "the number of bike become : "<< royalEnfield.getnumberOfBike();

}