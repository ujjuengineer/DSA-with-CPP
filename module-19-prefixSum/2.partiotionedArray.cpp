// check if array can be partitioned into 2 continuous arrays of equal sum.
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,5,10};
    int n = sizeof(arr)/sizeof(arr[0]);

// using mathematics we concluded that we can partitioned the array if arr[i]*2 == arr[n-1] i.e., last idx
    int idx = -1;
    for(int i = 0; i<n; i++){
        if(arr[i] * 2 == arr[n-1]){
            idx = i;
            break;
        }
    }

    if(idx != -1) cout<< "yes it can be partitioned at index " << idx << endl;
    else cout<< "cannot be partitioned " << endl;
}