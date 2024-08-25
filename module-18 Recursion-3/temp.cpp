#include<iostream>
#include<vector>
using namespace std;

void skip(int arr[], int idx, int n, vector<int>& v){
    if(idx==n){
        for(int ele: v) cout<< ele<<" ";
        return;
    }
    if(arr[idx]!=4){
        v.push_back(arr[idx]);
    }
    skip(arr,idx+1,n,v);
}

int main(){
    int arr[]={1,2,3,4,9,7,3,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v;

    skip(arr,0,n,v);
}