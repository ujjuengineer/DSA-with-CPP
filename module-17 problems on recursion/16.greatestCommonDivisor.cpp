/*
hcf(a,b) >= min(a,b)
lcm(a,b) >= max(a,b)
*/
// we will use euclid's division meathod to solve this question

// note that hcf(a,b) == hcf(b%a, b)

// time complexity of gcd(a,b) = Olog(a+b);
// this is calculated by induction, that we will study in higher classes

#include<iostream>
using namespace std;
int gcd(int a, int b){
    // base case
    if(a==0) return b;

    return gcd(b%a, a);
}
int main(){
    int a = 6;
    int b = 9;

    cout<< "HCF of "<< a << " and "<< b <<" is "<< gcd(a,b)<< endl;
}