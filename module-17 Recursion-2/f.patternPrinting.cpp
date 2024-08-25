/*
intput: 1
output: 1 1 1
intput: 2
output: 2 1 1 1 2 1 1 1 2
intput: 3
output: 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 */
#include<iostream>
using namespace std;
void fun(int n){
    if(n==0) return;
    cout<<n<<" " ;
    fun(n-1);
    cout<<n<< " ";
    fun(n-1);
    cout<<n<< " ";
}
int main(){
    int n;
    cin>>n;
    fun(n);
}