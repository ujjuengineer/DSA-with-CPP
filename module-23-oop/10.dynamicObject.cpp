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

int main() {

    // now we will create pointer of data type student, so that we can use it for dynamic memory allocation

    student* ptr = new student; // iss pointer me ek new object store kr diya
    // it is now like *ptr name ka student object ban gya hai 
    
    // // now we will give this pointer value to any other class 
    // student ptrObject = *ptr; // now ptrobject me new object store ho gya

    // // now we can use this ptrObject to set and get the value of new student 
    // ptrObject.setName("ujjwal kumar sharma");
    // cout << ptrObject.getName() << endl;

    // but this is not the best practice, we use follow 
    (*ptr).setName("ramchandra");
    cout << "new name is : " << (*ptr).getName() << endl;

    // another way to do this is follow
    ptr->setName("mum");
    cout << "new name is : "<< ptr->getName() << endl;
}