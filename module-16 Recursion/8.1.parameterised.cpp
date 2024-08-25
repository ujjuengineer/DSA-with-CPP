// print sum from 1 to n (parameterised)

#include<iostream>
using namespace std;
int sumOfN(int n){
    if(n==0) return 0;
    int sum = n + sumOfN(n-1);
    return sum;
}

int main(){
    int n;
    cout<< "enter n: ";
    cin >> n;
    cout<<"sum of 1 to "<<n<< " is "<< sumOfN(n);
}