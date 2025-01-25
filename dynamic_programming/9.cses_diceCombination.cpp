/*
Your task is to count the number of ways to construct sum n by throwing a dice one or more times. Each throw produces an outcome between 1 and  6.
For example, if n=3, there are 4 ways:

1+1+1
1+2
2+1
3

Input
The only input line has an integer n.
Output
Print the number of ways modulo 10^9+7.


Input:3
Output:4
*/
#include<iostream>
using namespace std;
int ways = 0;

int helper(int n) {
    // base case
    if(n==0) return 1;
    if(n<0) return 0;

    int ways = 0;
    for(int i = 1; i<=6; i++) {
        if(i>n) break;
        ways += helper(n-i);
    }
    // ways = helper(n-1) + helper(n-2) + helper(n-3) + helper(n-4) + helper(n-5) + helper(n-6);
    return ways;
}
int main() {
    int n;
    cin >> n;
    cout << helper(n);
}