/*
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to produce a sum of money x using the available coins in such a way that the number of coins is minimal.
For example, if the coins are \{1,5,7\} and the desired sum is 11, an optimal solution is 5+5+1 which requires 3 coins.
Input
The first input line has two integers n and x: the number of coins and the desired sum of money.
The second line has n distinct integers c_1,c_2,\dots,c_n: the value of each coin.
Output
Print one integer: the minimum number of coins. If it is not possible to produce the desired sum, print -1.
*/



/*
algo : 
    take it as previous question : 
    we have given x and we have to make it exactly 0, not less than 0
    
    let helper is a function which return the min way to make any number x to 0;
    so we will keep passing x-coin[i] and find min of them to get the minimum possible way or coins
    to make it 0;
*/

// here we have not handeled the -1 wala case, i.e., incase if we can't make it to 0 then we have to return -1;

#include<iostream>
#include<vector>
#include <climits>
using namespace std;



int helper(int x, vector<int>& coins) {
    // base case
    if(x==0) return 0;
    
    int result = INT_MAX;
    for(int i = 0; i<coins.size(); i++) {
        if(x<coins[i]) continue; // if coint size is more than the remaing number then don't make the call
        result = min (result, helper(x-coins[i],coins));
    }
    return 1 + result;
}

int main() {
    int n,x;
    cin >> n >> x;
    vector<int> coins;
    for(int i = 0; i<n; i++) {
        int c;
        cin >> c;
        coins.push_back(c);
    }

    cout << helper(x,coins);
}
