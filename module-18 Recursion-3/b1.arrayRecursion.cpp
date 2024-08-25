// how to travel in array using recursion

#include<iostream>
using namespace std;
void display(int arr[], int n, int idx){
    // base case
    if(idx==n) return;
    
    cout<< arr[idx]<<" ";
    display(arr, n, idx+1);
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n, 0);
}