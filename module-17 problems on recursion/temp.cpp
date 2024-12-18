#include<iostream>
#include<vector>
using namespace std;

void subarray(int arr[], int idx, int n, vector<int> ans){
    // base case
    if(idx == n){
        for(int ele : ans) cout << ele;
        cout << endl;
        return;
    }

    subarray(arr, idx+1, n, ans); // calling without adding
    // 2nd call me condition daalni hai
    if(ans.size()==0){
        ans.push_back(arr[idx]);
        subarray(arr, idx+1, n, ans);
    }
    else {
        int i = arr[idx-1];
        int j = ans[ans.size()-1];
        if(i==j){
            ans.push_back(arr[idx]);
            subarray(arr, idx+1, n, ans);
        }
    }
}

int main() {
    int arr[] = {1,2,3,4};
    vector<int> ans;
    subarray(arr, 0, 4, ans);
}