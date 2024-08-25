// make a function which calculates 'a' raised to the power 'b' using recursion
#include<iostream>
using namespace std;
int fun(int a, int b){
    // a raise to the power b is a*a*a... b times
    // fun(a,b)= a * fun(a, b-1);
    if(b==0) return 1;
    int ans = a * fun(a, b-1);
    return ans;
}
int main(){
    int a, b;
    cout<< "enter exponent and power respectively: ";
    cin>> a>> b;
    cout<< fun(a,b);
}