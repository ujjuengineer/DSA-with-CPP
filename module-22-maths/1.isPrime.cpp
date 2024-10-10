/* before this we were checking prime number in O(n) time complexity, but here we will see how we can calculate it in O(√n) time compx. */

/* 
=> factors of any number always exist in pair, so if any number "i" is a factor of n, then n/i is also a factor of n
=> half of the factors exist before sqre(n) and half exist after the sqrt(n), so we need not to check beyond sqrt(n) */

#include<iostream>
#include<cmath>
using namespace std;

bool isPrime(int &n){
    if(n==1 || n==0) return false;
    for(int i = 2; i<=sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}

int main(){
    int n;
    cout << "enter n " ;
    cin >> n;
    cout << (isPrime(n) ? "given number is a prime number" : "not a prime number") ;
}