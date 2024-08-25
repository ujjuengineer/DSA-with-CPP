
// leetcode problem number : 90
// subset-II
// do the same for array


#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[], int n, int idx, vector<int> ans, bool flag){
    // base case
    if(idx==n){
        for(int ele: ans) cout<< ele;
        cout<< endl;
        return;
    }
    
    char ch = arr[idx];
    if(n==1){
        subset(arr, n, idx+1, ans, true);
        ans.push_back(arr[idx]);
        subset(arr, n, idx+1, ans, false);
        return;
    }
    char ph = arr[idx+1];
    if(ch==ph){
        if(flag==true)subset(arr, n, idx+1, ans, true);
        ans.push_back(arr[idx]);
        subset(arr, n, idx+1, ans, false);
    }
    else{
        if(flag==true)subset(arr, n, idx+1, ans, true);
        ans.push_back(arr[idx]);
        subset(arr, n, idx+1, ans, 1);
    }
}

int main(){
    int arr[]={1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    subset(arr,n, 0, ans, true);
}