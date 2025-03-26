// first negative number in every window of size k

#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,-3,4,4,-7,-1,4,-2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    int ans[n-k+1];
    int ptr = -1;
    // finding first negative in first window
    for(int i = 0; i<k; i++){
        if(arr[i]<0){
            ptr = i;
            ans[0] = arr[ptr]; 
        }
    }
    if(ptr == -1) ans[0] = 1;

    // finding first negative in other window
    int i = 1, j = i + k - 1;
    while(j<n){
        if(ptr >= i){
            ans[i] = arr[ptr];
            i++, j++;
        }
        else{
            ptr = -1;
            for(int m = i; m<=j; m++){
                if(arr[m]<0){
                    ptr = m;
                    break;
                }
            }
            if(ptr == -1) ans[i] = 1;
            else ans[i] = arr[ptr];
            i++, j++;
        }
    }
    for(int ele: ans) cout<< ele << " ";
}