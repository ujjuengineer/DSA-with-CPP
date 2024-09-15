#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={3,1,2,10,1};
    int m = sizeof(arr)/sizeof(arr[0]);

    vector<int> nums(arr, arr+m);

    int n = nums.size();
    int sum = 0;
    for(int i = 0; i<n; i++){
        sum = sum + nums[i];
        nums[i] = sum;
    }

    for(int ele: nums) cout<< ele <<" ";
}