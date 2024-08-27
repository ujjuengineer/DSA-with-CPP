// write a function to calculate the nth fibonacci number using recursion
#include<iostream>
using namespace std;

int fibo(int n){
    
    // base case
    if(n==1 || n==2) return 1;

    return fibo(n-1) + fibo(n-2);

    // note that jab tak fibo(n-1) pura calculate na ho jaae, tab tak fibo(n-2) ka calculation start nhi hoti

    /*
    we can do this as 
    int left_call = fibo (n-1);
    int right_call = fibo (n-2);
    return left_call + right_call;
    
    */
}

int main(){
    
    int n = 6;
    cout<< fibo(n);



    // iterative solution

    int a = 1, b = 1;
    int nthFibbo;
    for(int i=3; i<=n; i++){
        nthFibbo = a + b;
        a = b;
        b = nthFibbo;
    }

    if(n==1 || n==2) cout<< "ntt fiboo is 1";
    else cout<< "nth fibo is: "<< nthFibbo;
    
}