// cyclic sort is used when we have to solve the problem in O(n) time complexity and O(1) space complexity
// this is generally used when we have given an array of [0,n] or an array of [1,n].


// worst number of swaps in cyclic sort for an length n = n-1


#include<iostream>
using namespace std;
int main(){
    int arr[]={5,1,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    int i = 0;
    while(i<n){
        int idx = arr[i]-1;
        if(arr[i]==i+1) i++;
        else swap(arr[i], arr[idx]);
    }

    for(int ele: arr) cout<< ele<<" ";
}