// while dealing with class, we usually access the data members values using ujjwal.name , ujjwal.age ... like this
// but this is not good for security reasons, so we use setter and getter function to assign or get the values of keys

#include<iostream>
using namespace std;

class student {
    private: // set the data members as private
    string name;
    int age;
    int grade;

    public: // set the getter and setter function as public

    // setter function
    void setName(string str) {
        name = str;
    }
    void setage(int n){
        age = n;
    }
    void setgrade(int n){
        grade = n;
    }

    // getter function : for accessing the value
    string getName(){
        return name;
    }
    int getage(){
        return age;
    }
    int getgrade(){
        return grade;
    }
};

int main(){
    student ujjwal;

    // assigning the value of object ujjwal using setter function
    ujjwal.setName("ujjwal sharma");
    ujjwal.setage(21);
    ujjwal.setgrade(9);

    // accessing the value of ujjwal
    cout << ujjwal.getName() << endl;
    cout << ujjwal.getage() << endl;
    cout << ujjwal.getgrade() << endl;
}