// print 1 to n using extra parameter in recursion
#include<iostream>
using namespace std;
void print(int n, int i){
    if(i>n)return;
    cout<<i<<endl;
    print(n, i+1);
}


int main(){
    int n;
    cout<<"enter n: ";
    cin>> n;
    print(n, 1);   
}