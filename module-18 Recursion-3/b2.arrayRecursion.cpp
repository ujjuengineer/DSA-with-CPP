// we can even print the array without passing idx
// post printing

#include<iostream>
using namespace std;
void display(int arr[], int n){
    // base case
    if(n<0) return;

    display(arr, n-1); // recursion krte krte n==0 tak chla jaaega, and return time pr print kr dega, when return time pr n==1 hoga, then arr[0] print krega, when n = 2 hoga, arr[1] print krega and so on.
    cout<< arr[n]<<" ";
}
int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    display(arr, n-1); // sent last index of the array
}