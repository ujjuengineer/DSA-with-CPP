// better approach to calculate a raise to the power b
#include<iostream>
using namespace std;

int fun(int a, int b){  
    // base case 
    if(b==0)return 1;
    
    int x = fun(a,b/2);
    
    if(b%2==0)return x*x;
    else return a*x*x;
}

int main(){
    int a, b;
    cout<< "enter exponent and power respectively: ";
    cin>> a>> b;
    cout<< fun(a,b)<< endl;
}