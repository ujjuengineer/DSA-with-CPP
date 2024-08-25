// given a sorted array of n elements and a target 'x'. find the last occurrence of 'x' in the array. if 'x' does not exist return -1;

// input : arr[]={1,2,3,3,4,4,4,4}, x = 4
// output : 6
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,3,4,4,4,4};
    int target;
    cout<<"enter target: ";
    cin>> target;
    int n = sizeof(arr)/sizeof(arr[0]);

    int lo = 0, hi = n-1;
    bool flag = 0;
    for(int i=0; i<n-1; i++){
        while(lo<=hi){
            int mid = lo + (hi-lo)/2;
            if(arr[mid]>target) hi = mid - 1;
            else if(arr[mid]<target) lo = mid + 1;
            else{ // if(arr[mid]==target)
                if(mid<n-1){
                    if(arr[mid+1]==target) lo = mid + 1;
                    else{ 
                        /* if arr[mid+1] is not equal to target then arr[mid] should be the occurrence of target */
                        cout<< "last occurrence of "<< target << " is "<< mid;
                        flag = 1;
                        break;
                    }
                }
                else{
                    /* if mid is equal to n-1 i.e., last element of arr then it must be the last occurrece */
                    cout<< "last occurrence of "<< target << " is "<< mid;
                    flag = 1;
                    break;
                }
            }
        }
        if(flag==1) break;
    }
    if(flag==0) cout<<"ERROR 404, target not found";
    // agar flag = false hai means uper me humara target nhi mila hai
}