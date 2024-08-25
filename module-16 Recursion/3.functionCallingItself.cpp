#include<iostream>
using namespace std;

void fun(int n){ // yaha n = 3 hai first round me
    if(n==0)return; // this is called base case
    cout<<"hello ujjwal"<<endl;
    fun(n-1); // we again called fun function and argument me n-1 send kra i.e., 2
    // finally fun me n-1=0 jaaega and "if condition" satisfy kr k loop break hoga
    // this is called recursion
    return;
}

int main(){
    
   fun(3); 
   // called fun function with argument 3

   // in fun function, "if condition" overthere is called base case. Base case basically tells us when to stop the recursion
}