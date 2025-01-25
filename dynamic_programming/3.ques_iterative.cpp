#include<iostream>
#include<vector>
#define inf INT_MAX
using namespace std;

vector<int> dp;

int main() {
    cout << "enter n : ";
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n+1,-1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i = 4; i<=n; i++) {
        dp[i] = 1 + min(dp[i-1], min((i%2==0 ? dp[i/2] : inf), (i%3==0 ? dp[i/3] : inf))); 
        
    }
    
    cout << dp[n];
}