/*
create a class "cricketer" that contains name of cricketer, his age, number of test matches he played and avrage run he has scored in each test match. create an array of data type "cricketer" to hold records of 20 such cricketers and then write program to read these record
*/

 
#include<iostream>
using namespace std;

class cricketer {
    private :
    string name;
    int age;
    int numOfMatches;
    vector<int> runs; // hold run scored in every match

    public:
    // getter
    string getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getNumOfMatches(){
        return numOfMatches;
    }
    vector<int> getRuns(){
        return runs;
    }

    // setter
    void setName(string name){
        this->name = name;
    }
    void setAge(int age){
        this->age = age;
    }
    void setNumOfMat(int num) {
        numOfMatches = num;
    }
    void setRuns(vector<int>& runs) {
        this->runs = runs;
    }
};


int main() { 
    cricketer pla[3];




    // now we have created array of 3 player of class cricketer
    // we can access them using pla[0], pla[1] and pla[2]

    // let set the data of the player
    for(int i = 1; i<=3; i++) {
        cout << "enter the name of the "<< i <<"th"<< " player ";
        string n;
        cin>> n;
        pla[i-1].setName(n);

        cout << "enter the age of the "<< i <<"th"<< " player ";
        int a;
        cin >> a;
        pla[i-1].setAge(a);

        cout << "enter the number of matches played by "<< i <<"th"<< " player ";
        int numOfmat;
        cin >> numOfmat;
        pla[i-1].setNumOfMat(numOfmat);

        cout << "enter the score of the "<< i <<"th"<< " player in each match : ";
        vector<int> score;
        for(int i = 0; i<numOfmat; i++) {
            int s;
            cin>> s;
            score.push_back(s);
        }
        pla[i-1].setRuns(score);
        cout << endl;
    }    

    cout << endl;

    // accessing the input data using loop
    for(int i = 0; i<3; i++) {
        cout << "data of "<<i+1<<"th player : "<< endl;
        cout << "Name : " << pla[i].getName() << endl;
        cout << "Age : "<< pla[i].getAge() << endl;
        cout << "Num of matches played : "<< pla[i].getNumOfMatches()<< endl; 

        // we can't cout a vector directly, so we get the class vector in anoter vector here and then use loop to print this  
        vector<int> temp = pla[i].getRuns();
        cout << "run scored in respective matches are : ";
        for(int i = 0; i<temp.size(); i++) {
            cout << temp[i]<<" ";
        }
        cout << "\n\n";
    }


    // dynamic allocation



}

