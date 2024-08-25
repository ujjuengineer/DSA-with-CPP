// try solving it using call stack or tree diagram
#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<< "Pre "<< n << endl;
    fun(n-1);
    cout<< "In "<< n<< endl;
    fun(n-1);
    cout<< "Post "<< n<< endl;
}
int main(){
    fun(3);
}