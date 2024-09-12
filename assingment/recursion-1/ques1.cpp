// write a program to calcualte the sum of odd numbers between a and b (both inclusive) using recursion
#include<iostream>
using namespace std;

void fun(int a, int b, int &sum){
    if(a>b)return;
    
    if(a%2!=0){
        sum += a;
        fun(a+2,b,sum);
    }
    else fun(a+1, b, sum);
    return;
}

int main(){
    int a, b;
    cout<< "enter a and b: ";
    cin>> a>> b;
    int sum = 0;
    fun(a,b,sum);

    cout<< sum<< endl;
}