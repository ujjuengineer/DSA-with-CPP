// a man can climb either 1 step at a time or 2 steps at a time, find in how many way he can climb n stairs
// for this particular question, either we can use recurence relation, or we can use an observation that to climb n stair, it required nth term of fibonacci series, so eventually we need to find nth fibonacii series

// recursion meathod

#include<iostream>
using namespace std;

int fibo(int n){
    if(n==2)return 2;
    if(n==1)return 1;
    return fibo(n-1) + fibo(n-2);
}

int main(){
    int n;
    cout<<"enter number of staire: ";
    cin>> n;
    cout<<"possible number of ways = "<< fibo(n);
}