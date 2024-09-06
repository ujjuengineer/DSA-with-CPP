/* 1 bytes = 8 bits --> (2 to the power 8)/2 = 2 to the power 4 --> so any datatype of size 8 bits can store number from 
(-2 to the power 4) to {(2 to the power 4)-1}, -1 iss liye kyuki bich me ek zero v aa jata hai */

// we use sizeof to know the size of the variable
#include<iostream>
using namespace std;
int main(){
    cout<< sizeof(int) << endl; // 4 bytes -> 16 bits
    cout<< sizeof(bool) << endl; // 1 bytes 
    cout<< sizeof(char) << endl; // 1 bytes
    cout<< sizeof(float) << endl; // 4 bytes
    cout<< sizeof(long long) << endl; // 8 bytes
}