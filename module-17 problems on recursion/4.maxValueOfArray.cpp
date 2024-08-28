#include<iostream>
using namespace std;


void maxi(int arr[], int idx, int size, int maxele){
    // base case
    if(idx==size){
        cout<< "max element is : "<< maxele<< endl;
        return;
    }

    if(arr[idx]>maxele) maxele = arr[idx];
    maxi(arr, idx+1, size, maxele);
}


int main(){
    int arr[]={1,5,7,4,9,3,5,0};
    int size = sizeof(arr)/sizeof(arr[0]);

    maxi(arr, 0, size, INT_MIN);
}