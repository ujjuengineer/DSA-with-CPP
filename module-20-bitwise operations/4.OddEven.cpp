#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin >> n;

    cout << ((n & 1) ? "odd number" : "even number");

/*
    every odd number in binary ends wiht 1, and if we do & operation with '1' then it will ans accordingly !
*/
}