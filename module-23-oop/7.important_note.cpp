#include<iostream>
using namespace std;

class student {
private :
    string name;
    int age;
    int grade;

public :

    // setter function
    void setAge(int age){
        // age = age;
        // now yaha pe input var ka name v age and assigning var ka name v age hai, so this may cause problem, to get rigid of this we use scope resolution operator

        student::age = age; // this :: use to specify any variable belonging to any class
    }
    void setName(string name) {
        // another way to solve this problem is using "this", using "this" specify that variable belongs to current class
        this->name = name;
    }
    void setGrade(int grade) {
        this->grade = grade;
    }

    // getter function
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getGrade(){
        return grade;
    }
};

int main(){
    student ujjwal;

    ujjwal.setAge(21);
    ujjwal.setGrade(9);
    ujjwal.setName("ujjwal kumar sharma");

    cout << "the age is : "<<ujjwal.getAge();

}