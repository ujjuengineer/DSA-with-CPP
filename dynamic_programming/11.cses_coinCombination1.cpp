/*
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ways you can produce a money sum x using the available coins.
For example, if the coins are \{2,3,5\} and the desired sum is 9, there are 8 ways:

2+2+5
2+5+2
5+2+2
3+3+3
2+2+2+3
2+2+3+2
2+3+2+2
3+2+2+2

Input
The first input line has two integers n and x: the number of coins and the desired sum of money.
The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
Output
Print one integer: the number of ways modulo 10^9+7.
Constraints

1 \le n \le 100
1 \le x \le 10^6
1 \le c_i \le 10^6

Example
Input:
3 9
2 3 5

Output:
8
*/

#include<iostream>
#include<vector>
using namespace std;

#define mod 1000000007

vector<int> coin;
vector<int> dp;

int helper(int x) {
    // base case
    if(x == 0) return 1;
    if(dp[x] != -1) return (dp[x] % mod);

    int ways = 0;
    for(int i = 0; i<coin.size(); i++) {
        if(x<coin[i]) continue;
        ways = ((ways % mod) + (helper(x-coin[i])%mod)) % mod;
    }
    return dp[x] = (ways % mod);
}

int main() {
    int n, x;
    cin >> n >> x;

    coin.clear();
    coin.resize(n);
    for(int i = 0; i<n; i++) cin >> coin[i];
    dp.clear();
    dp.resize(x+1,-1);
    cout << helper(x);
}