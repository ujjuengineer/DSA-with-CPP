#include<iostream>
using namespace std;

class student {
private :
    string name;
    int age;
    int grade;

public :
    // setter fun
    void setAge(int age){
        student::age = age; 
    }
    void setName(string name) {
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

// passing object in this function
// since student is also a kind of data type so we can similarly pass student in the function
int maxGrade(student a, student b) {
    return max(a.getGrade(), b.getGrade()); 
    // here we have used the getter function to get the grade of passed objects, and then returned the max of them
}

// created a function of return data type class
student maxGradeObject(student a, student b) {
    if(a.getGrade() > b.getGrade()) return a;
    else return b;
}
// since we can't directly cout any class, so firstly we must store the return of this function in another object and then access it

int main() {

    // created 2 object
    student ujjwal, ram;

    ujjwal.setName("ujjwal kumar sharma");
    ujjwal.setAge(21);
    ujjwal.setGrade(9);

    ram.setName("Ramachandra");
    ram.setAge(21);
    ram.setGrade(10);

    cout << maxGrade(ujjwal, ram) << endl; // passed a = ujjwal, b = ram

    // creating another object 
    student maxGr = maxGradeObject(ram, ujjwal);
    cout << maxGr.getName() << " have more grade = "<< maxGr.getGrade() << endl;
}    