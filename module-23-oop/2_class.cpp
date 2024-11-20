// we can also create array of many classes
#include<iostream>
using namespace std;

class player{
    public:
    string name; // these are called data members
    // if we make health "private:" then we will be unable to access it from main
    int health;
    int damage;
};

int main(){
    player pla[10]; // this array store 10 player details
    
    pla[0].name = "Ujjwal Sharma";
    pla[0].health = -7;
    pla[0].damage = 100;

    pla[1].name = "Rass Sharma";
    pla[1].health = 100;
    pla[1].damage = 0;

    pla[2].name = "Ram Sharma";
    pla[2].health = 89;
    pla[2].damage = 11;
    cout <<"the size of the player is :" <<  << endl;

    // we can print our objects data using loop 
    for(int i = 0; i<=2; i++){
        cout << pla[i].name<<",";
        cout << pla[i].health<<",";
        cout << pla[i].damage<<endl;
    }
}