// print 1 to n (after recursive call)

#include<iostream>
using namespace std;
void print(int n){
    if(n==0)return;
    print(n-1);
    cout<< n<< endl;
}

int main(){
    int n;
    cout<< "enter n: ";
    cin >> n;
    print(n);
}