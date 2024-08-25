// print increasing decreasing sequence
// input n = 4
// output : 1 2 3 4 3 2 1

#include<iostream>
using namespace std;
void fun(int n, int i){
    if (i>n) return;
    
    cout<< i<<" ";
    fun(n, i+1); // find out what happens if we do ++i or i++
    
    if(i-1>0) cout<< i-1<<" "; // this will run while returning 
    
    return;
}
int main(){
    int n;
    cout<< "enter n: ";
    cin>> n;
    fun(n,1);
}