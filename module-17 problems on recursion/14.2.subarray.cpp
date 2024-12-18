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
        // agar size 0 and tab add  krni hai without any condition
        ans.push_back(arr[idx]);
        subarray(arr, idx+1, n, ans);
    }
    else {
        // agar size 0 nhi hai then check krni hai that prev ele of original is same as last ele of ans, if same then upend krna hai, else upend nhi krna hai
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