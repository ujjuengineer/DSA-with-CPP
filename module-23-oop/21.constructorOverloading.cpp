// constructor overloading

#include<iostream>
using namespace std;

class student {
    private :
    int age;
    int height;

    // constructor oveloading
    public:
    student (int a, int h) : age(a), height(h)  {}
    student (int a) : age(a), height (6) {}
    student () : age(21), height(7)  {}
    

    // getter
    int getAge(){ 
        return age;
    }
    int getHeight() {
        return height;
    }
};

int main(){
    student sita(21,6); // first constructor will be used 
    student ujjwal(21); // 2nd constructor will be used 
    
    student ram; // 3rd constructor will be used
    

    // Print values for each object
    cout << "ujjwal: " << ujjwal.getAge() << ", " << ujjwal.getHeight() << endl;
    cout << "ram: " << ram.getAge() << ", " << ram.getHeight() << endl;
    cout << "sita: " << sita.getAge() << ", " << sita.getHeight() << endl;

    return 0;
}