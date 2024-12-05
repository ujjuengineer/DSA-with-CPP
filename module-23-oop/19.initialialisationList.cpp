// this nothing but a shortcut way to create a constructor,

#include<iostream>
using namespace std;

class student {
    private :
    int age;
    int height;

    // constructor
    public:
    student (int a, int h = 6) : age(a), height(h) {
        // this area remains empty
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