// find out all the subarray of an array
// if array is {1,2,3,4} then subarray are {1}, {1,2}, {1,2,3}, {1,2,3,4}, {2}, {2,3}, {2,3,4}, {3}, {3,4}, {4} 
// note: subarray are continuous part of an array. {2,4} is not an subarray as it is not continuous


// M-1: using loops
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    // we will create 3 loop, first loop will make us reach at 1st idx then 2nd idx, under 1st loop we will print all the subarray starting from 1 in first iteration and then print all the subarray starting from 2 in next iteration and so on

    // under 2nd loop, we will decide what will be the length of the different subarray 
    // 3rd loop will print the subarrays

    for(int i=0; i<n; i++){
    // if i=0, then oth index se start hone wala sara subarr print hoga
        for(int j=i; j<n; j++){
        // if j=2 then ith index se le kr 2 length ka subarr print ho jaaega 
            cout<<"{ "; 
            for(int k=i; k<=j; k++){
                cout<< arr[k]<<" ";
            }
            cout<<"}";
            cout<< endl;
        }
    }
}