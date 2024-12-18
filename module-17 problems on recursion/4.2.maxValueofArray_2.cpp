// here we will not use maxele variable to print max value  

#include<iostream>
#include<cmath>
#include<climits>
using namespace std;


int maxi(int arr[], int idx, int size){
    // base case
    if(idx==size) return INT_MIN;

    int ans = max(arr[idx], maxi(arr, idx+1, size));
    return ans;
}


int main(){
    int arr[]={1,5,7,4,9,3,5,0};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<< maxi(arr, 0, size)<< endl;
}