// using dp, recursion + memoization

#include<iostream>
#include<vector>
using namespace std;

#define mod 1000000007 

vector<long long> dp;

long long helper(long long n) {
    // base case
    if(n==0) return 1;
    if(n<0) return 0;
    if(dp[n] != -1) return dp[n];

    long long ways = 0;
    for(int i = 1; i<=6; i++) {
        if(i>n) break;
        ways = ((ways % mod) + (helper(n-i) % mod)) % mod;
    }
    // ways = helper(n-1) + helper(n-2) + helper(n-3) + helper(n-4) + helper(n-5) + helper(n-6);
    return dp[n] = ways % mod;    
}
int main() {
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n+1,-1);
    cout << helper((long long)n);
}