// we can even give default value of the constructor
#include<iostream>
using namespace std;

class student {
    private :
    int age;
    int height;

    // constructor
    public:
    student (int age, int height = 6) {
        this -> age = age;
        student :: height = height;
    }

    // getter
    int getAge(){ 
        return age;
    }
    int getHeight() {
        return height;
    }
};

int main(){
    student ujjwal(21);

    cout << ujjwal.getHeight() << endl;
}