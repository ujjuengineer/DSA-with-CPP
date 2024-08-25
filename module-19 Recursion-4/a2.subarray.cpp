// finding subarray using recursion

#include<iostream>
#include<vector>
using namespace std;

void subarray(int arr[], int n, int idx, vector<int> v){
    // base case
    if(idx==n){
        for(int ele: v) cout<< ele;
        cout<< endl;
        return;
    }

    int k = v.size();
    if(k==0){
        subarray(arr, n, idx+1, v);
        v.push_back(arr[idx]);
        subarray(arr, n, idx+1, v);
    }
    // if k!=0 then 
    else{
        subarray(arr, n, idx+1, v);
        // 2nd case will only run if it satisfy following condition
        if(arr[idx-1]==v[v.size()-1]){
            v.push_back(arr[idx]);
            subarray(arr, n, idx+1, v);
        }
    }
    
    
}

int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v;

    subarray(arr, n, 0, v);
}