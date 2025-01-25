/*
You are given an integer n. On each step, you may subtract one of the digits from the number.
How many steps are required to make the number equal to 0?
Input
The only input line has an integer n.

Output :
Print one integer: the minimum number of steps.
*/





// recursive solution 


// #include<iostream>
// #include<vector>
// using namespace std;


// vector<int> helper(int n) {
//     vector<int> dig;
//     while(n != 0) {
//         if(n%10 != 0){ // agar digit 0 hai to usko humlog add nhi krenge 
//             dig.push_back(n%10);
//         }
//         n/=10;
//     }
//     return dig;
// }

// int recur(int n){
//     // base case
//     if(n==0) return 0;
//     if(n<=9) return 1;      

//     vector<int> res = helper(n);

//     int result = INT_MAX;
//     for(int i = 0; i<res.size(); i++){
//         result = min(result, recur(n-res[i]));
//     }
//     return 1 + result;
// }

// int main() {
//     cout << "enter n : ";
//     int n;
//     cin >> n;

//     cout << recur(n) << endl;

//}

#include<iostream>
#include<vector>
using namespace std;

vector<int> dpVec;

vector<int> helper1(int n){
    vector<int> ans; // consist all the digits except 0
    while(n != 0){
        if(n%10 != 0){
            ans.push_back(n%10);
        }
        n/=10;
    }
    return ans;
}

int dp(int n) {
    // base case
    if(n==0) return 0;
    if(n<=9) return 1;
    if(dpVec[n] != -1) return dpVec[n];

    vector<int> dig = helper1(n);
    int steps = INT_MAX;
    for(int i = 0; i<dig.size(); i++){
        steps = min(steps, dp(n-dig[i]));
    }
    return dpVec[n] = 1 + steps;
}
int main(){
    int n;
    cout << "enter n : ";
    cin >> n;
    dpVec.clear();
    dpVec.resize(n+1, -1);
    cout << dp(n) << endl;
}