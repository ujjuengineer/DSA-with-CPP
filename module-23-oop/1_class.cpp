#include<iostream>
#include<string>
using namespace std;

class player{
    public:  // access modifier : public/private/protected
    string name; // these are called data members
    int health;
    int score;

}; // we need to add semicoln at the end of the class

int main(){
    player ujjwal; // here we created an object of player class
    ujjwal.name = "ujjwal sharma";
    ujjwal.health = 0;
    ujjwal.score = -10;
    cout << ujjwal.name<< endl;
    cout << ujjwal.health<< endl;
    cout << ujjwal.score<< endl;

    // we can create such many objects

    player rasshi;
    rasshi.name = "rasshi shrivastav";
    rasshi.health = 100;
    rasshi.score = 100;

    player ganesh;
    ganesh.name = "ganesh gyandu";
    ganesh.health = 90;
    ganesh.score = 80;

    // now we can print all those objects data
}

/*  
 => class is a user defined datatype
    four things that we have to study in oops are follows :
    1. data abstraction : hiding data that are not necessary to show
    2. data encapsulation : putting various data under a class
    3. inheritace : we can inherit some property of a class into another class
    4. polymorphism : same code se different functionality archive kr lete hai

*/