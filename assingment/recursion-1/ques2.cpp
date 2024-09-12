// calculate the number of ways in which a person can climb n stairs if he can take exactly 1 or 2 steps at each level

#include<iostream>
using namespace std;

int fun(int n, int &step){
    if(n==1)return 1;
    if(n==2) return 2;
    if(n<1) return 0; 
    step = fun(n-1, step) + fun(n-2, step) ;

    // // another way
    // int a = fun(n-1, step); // above meathod me v pehle first called function pura calculate hota hai and then second called function pe jaaenge
    // int b = fun(n-2, step);
    // step = a + b;
    return step;
}


int main(){
    int n = 4;
    int step = 0;
    cout<< fun(n,step);
}