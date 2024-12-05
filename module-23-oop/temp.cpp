#include<iostream>
using namespace std;

class player {
    public: 
    class helmet{
        private:
        int hp;

        public:
        // setter function
        void setHp(int hp) {
            this->hp = hp;
        }
        // getter function
        int getHp(){
            return hp;
        }
    };

    int age;
};

int main(){
    player::helmet Level1;
    Level1.setHp(100);

    cout << Level1.getHp();
    
}