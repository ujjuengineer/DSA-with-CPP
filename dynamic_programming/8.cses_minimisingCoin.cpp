// using dp 

#include<iostream>
#include<vector>
#include <climits>
using namespace std;

vector<int> dp(1000006,-1);

int helper(int x, vector<int>& coins) {
    // base case
    if(x==0) return 0;
    if(dp[x] != -1) return dp[x];

    int result = INT_MAX;
    for(int i = 0; i<coins.size(); i++) {
        if(x<coins[i]) continue; // if coint size is more than the remaing number then don't make the call
        result = min (result, helper(x-coins[i],coins));
    }
    // agar result abhi v int_max hai means x ko 0 nhi bna pae, in that case we have to return -1, but we can't directly return -1 from dp[x], here is why
    /*
    let we have x = 4 computed here and for x = 4 we didn't any answer and we return -1 in dp[4], now let in some other iteration we again have see dp[4], now agar hum phele dp[4] me -1 return kr chuke hai, then system ko esa lgega dp[4] calculate hua hi nhi hai, and it will again start the calculation of dp[4], and it will again return -1 and then again in some other call it will calculate dp[4]

    so to get rigid of that, we return INT_Max instead of -1, and in main function we will check, if helper finally return int-max, then we will cout -1, else we will cout the return result;
    */
    if(result == INT_MAX) return dp[x] = INT_MAX;
    return dp[x] = 1 + result;
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

    if(helper(x,coins) == INT_MAX) cout << -1 << endl;
    else cout << helper(x,coins);
}
