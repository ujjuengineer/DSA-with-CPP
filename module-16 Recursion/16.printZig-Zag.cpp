#include<iostream>
using namespace std;
// if input is 1 :  1 1 1
// if input is 2 : 2 1 1 1 2 1 1 1 2
// if input is 3 : 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3
// if input is 4 : 4 3 2 1 1 1 2 1 1 1 2 3 2 1 1 1 2 1 1 1 2 3 4.. repeat
// note: 3-3 k bich me three 2s hoega, 2-2 k bich me three 1s hoega and phir same repeat hoega

void call(int n){
    if(n==0) return;

    cout<< n<<" ";
    call(n-1);
    cout<< n<<" ";
    call(n-1);
    cout<< n<<" ";
}

int main(){
    int n = 4;
    call(n);
}