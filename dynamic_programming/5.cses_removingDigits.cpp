#include<iostream>
#include<vector>
#include<climits>
using namespace std;

vector<int> dp;

vector<int> helper(int n) {
    vector<int> dig;
    while(n != 0) {
        if(n%10 != 0){ // agar digit 0 hai to usko humlog add nhi krenge 
            dig.push_back(n%10);
        }
        n/=10;
    }
    return dig;
}

int recur(int n){
    // base case
    if(n==0) return 0;
    if(n<=9) return 1;      
    if(dp[n] != -1) return dp[n];

    vector<int> res = helper(n);

    int result = INT_MAX;
    for(int i = 0; i<res.size(); i++){
        result = min(result, recur(n-res[i]));
    }
    return dp[n] = 1 + result;
}

int main() {
    int n;
    cin >> n;
    dp.clear();
    dp.resize(n+1, -1);

    cout << recur(n);

}