// solving using recursion + memonization

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

    if(dp[n] != -1) return dp[n];
    // recursive call
    return dp[n] = 1 + min(helper(n-1), min((n%2==0 ? helper(n/2) : inf), (n%3==0 ? helper(n/3) : inf)));
}

int main() {
    cout << "enter n : ";
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n+1,-1);
    cout << helper(n);
}
