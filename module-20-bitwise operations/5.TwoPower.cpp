// to calculate 2 to the power x, we don't have to apply loop x times, we can simply use bitwise operator to calculate

#include<iostream>
using namespace std;
int main(){
    // let we have to calculate 2 to the power 5, so we will apply left shift operator on 1
    
    int pow;
    cout <<"enter power " ;
    cin >> pow;

    cout << "2 to the power "<< pow << " is "<< (1<<pow) << endl;

/*
    1 : 00001 , now if we left shift 00001 4 times then it become 0010000. now 1 is at 4th power of 2, so if we calculate its value in decimal form, it will give 2 to the power 4.
*/
}