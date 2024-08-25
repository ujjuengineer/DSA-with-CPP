
#include<iostream>
using namespace std;

int lastDigit, firstDigit;

void digit(int* x){
    lastDigit = *x%10;
    while (*x>10){
        *x /= 10;
    }
    firstDigit = *x;
}
int main(){
    int n;
    cout<<"enter a num: ";
    cin>>n;
    digit(&n);
    cout<<"first digit : "<<firstDigit<<endl<<" last digit: "<<lastDigit;
    // since we have declared firstDigit and lastDigit at the top so we can use it in main function as well  
}