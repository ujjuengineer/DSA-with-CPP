// multiple call
// write a function to calculate the nth fibonacci number using recursion

#include<iostream>
using namespace std;

int fun(int n){
    if(n==1) return 1;
    else if(n==2) return 1;
    else return fun(n-1) + fun(n-2);
    // note that, jab tak fun(n-1) ka call complete nhi ho jata tab tak fun(n-2) ka call nhi lgega
    // see euler's tour tree
}

int main(){
    int n = 6;
    cout<< fun(n);
}