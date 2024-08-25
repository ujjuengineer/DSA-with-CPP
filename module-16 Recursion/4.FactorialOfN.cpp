// make a function which calculates the factorial of n using recursion.
#include<iostream>
using namespace std;

long long fac(long long x){
    if(x==0) return 1;  // base call
   
    long long factorial;
    return x * fac(x-1);
}

int main(){
    int n;
    cout<< "enter the number: ";
    cin>> n;
    cout<<"factorial of "<<n<<" is "<<fac(n);
}
