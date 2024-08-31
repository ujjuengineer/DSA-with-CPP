// generate all binary strings of length 'n' without consecutive 1's
// note if length = n, then number of binary string is 2 to the power n

#include<iostream>
using namespace std;

// this function will print all the binary string, we will do some changes to this code to print according to the required condition
void printAllBinary(string str, int n){
    // base case
    if(str.size()==n){
        cout<< str<< ' ';
        return;
    }   
    printAllBinary(str+'0', n);
    printAllBinary(str+'1', n);
}


void printBinary(string str, int n){
    // base case
    if(str.size()==n){
        cout<< str<< ' ';
        return;
    }
    
    printBinary(str+'0', n);
    if(str[str.size()-1]!='1')printBinary(str+'1', n);
}

int main(){
    int size;
    cout<<"enter size: ";
    cin>> size;
    
    printAllBinary("", size); // print all the binary string
    cout<< endl;
    printBinary("", size); // print according to condition
}