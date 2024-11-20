// member function
#include<iostream>
#include<string>
using namespace std;

class student {
    public: 
    string name; // these are called data member
    int health; // data member
    
    // this is class function, i.e., class ke andar ka function
    void showHealth(){
        cout << "the health is : " << health;
    }
};

int main(){
    student ujjwal;
    ujjwal.name = "ujjwal kumar sharma";
    ujjwal.health = 0.55;
    ujjwal.showHealth(); // this is how we access the member function

}