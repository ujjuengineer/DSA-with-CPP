// do the same for the array

#include<iostream>
#include<vector>
using namespace std;

void subset(int arr[], int size, int idx, vector<int> ans, bool flag){
    // base case
    if(idx==size){
        for(int ele: ans){
            cout<< ele;
        }
        cout<< endl;
        return;
    }
    int x = arr[idx];
    if(idx==size){
        subset(arr, size, idx+1, ans, true);
        ans.push_back(x);
        subset(arr, size, idx+1, ans, true);
    }
    else{
        int y = arr[idx+1];
        if(x==y){
            if(flag==true) subset(arr, size, idx+1, ans, true);
            ans.push_back(x);
            subset(arr, size, idx+1, ans, 0);
            
        }
        else{
            if(flag==true) subset(arr, size, idx+1, ans, true);
            ans.push_back(x);
            subset(arr, size, idx+1, ans, true);
        }
    }
}


int main(){
    int arr[]={1,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> ans;

    subset(arr, n, 0, ans, true);
}