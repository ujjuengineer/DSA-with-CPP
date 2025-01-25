/*
given a number n, you can any of the following operations on it to reduce it to 1
    1. reduce n -> n-1
    2. if n is divisible by 2, then make it n/2
    3. if n is divisible by 3, then make it n/3

    find out in how many minimum ways we can reduce n into 1
 */

 // recursive solution
 /*
 using recursion we will find which path will give me minimum value, either n-1 or n/2 or n/3
  and then we will add 1 to it and return the answer

we will add 1 to it because, to go on the min path, we must move 1 step, so we add 1 to it and then return it.
 */

#include<iostream>
#include<vector>
#include<math.h>
using namespace std;
vector<int> dp;
#define inf INT_MAX

int helper(int n){
    // base case
    if(n==1) return 0;
    if(n==2 || n==3) return 1;

    // recursive call
    return 1 + min(helper(n-1), min((n%2==0 ? helper(n/2) : inf), (n%3==0 ? helper(n/3) : inf)));
}

int main() {
    cout << "enter n : ";
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n,-1);
    cout << helper(n);
}
