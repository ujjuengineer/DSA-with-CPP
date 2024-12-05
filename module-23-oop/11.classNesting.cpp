#include <iostream>
using namespace std;

class Gun {
    public:
    int ammo;
    int damage;
    int scope;
};

class player {

    private:
    // creating a private class inside a player class
    class Helmet {
        int hp;
        int level;

        public:
        // setter
        void setHp(int hp) {
            this->hp = hp;
        }
        void setLevel(int level) {
            this->level = level;
        }

        // getter
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    // Helmet class yaha bna hai to iska object v yhi construct hoga

    // player class ke keys, (data member)
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet; 

    

    // setter function
    public:
    void setHealth(int health) {
        this->health = health;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setScore(int score) {
        this->score = score;
    }
    void isAlive(bool alive) {
        this->alive = alive;
    }
    void setGun(Gun gun) {
        this->gun = gun;
    }


    // since Helmet iss player object ke andar bna hai, and agar ye public hota to we can create an object of its like player::Helmet level1; 

    // since helmet is a private class, so we can't access its function from the main, but we can access its public function from this class, so we send an int value to the setHelmet function and set the hp and level accordingly inside this setHelmet function. 

    void setHelmet(int level) {
        // ek helmet type pointer bnaya jisme new helmet create kr liya for dynamic memory allocation
        Helmet* helmet = new Helmet; 
        // now we know this *helmet will act as new object of Helmet
        (*helmet).setLevel(level); // helmet -> setlevel(level);
        int hp = 0;
        if(level == 1) hp = 20;
        else if(level == 2) hp = 30;
        else if(level == 3) hp = 50;
        else cout << "invalid level !";
        (*helmet).setHp(hp);

        this->helmet = (*helmet);
    }

    

    // getter function
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    bool getAlive(){
        return alive;
    }
    Gun getGun(){
        return gun;
    }
    void getHelmet(){
        cout <<"helmet hp = "<< helmet.getHp() << endl;
        cout <<"helmet level = "<< helmet.getLevel() << endl;
    }

};

int main() {

    Gun akm;
    akm.damage = 50;
    akm.ammo = 40;
    akm.scope = 2;

    Gun m4;
    m4.damage = 40;
    m4.ammo = 30;
    m4.scope = 3;

    player ujjwal;
    ujjwal.setHealth(100);
    ujjwal.setAge(21);
    ujjwal.setScore(35);
    ujjwal.isAlive(true);
    ujjwal.setGun(akm);
    ujjwal.setHelmet(1);

    player ram;
    ram.setHealth(200);
    ram.setAge(22);
    ram.setScore(56);
    ram.isAlive(true);
    ram.setGun(m4);
    ram.setHelmet(3);

    // now to accecc gun, we first need to store it in similar object so that we can access it
    Gun ramKaGun = ram.getGun();
    cout <<"ram ke gun ka damage "<< ramKaGun.damage << endl;
    cout <<"ram ke gun me ammo "<< ramKaGun.ammo << endl;
    cout <<"ram ke gun me scope "<< ramKaGun.scope << endl;

    
    ram.getHelmet();
}