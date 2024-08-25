// in previous c1 max file, we were printing max using a max variable, eventually we were creating new max variable at every recursion, so it was not very space efficient
// here we will solve this using max function

#include<iostream>
using namespace std;
// this function will return the max
int print(int idx, int arr[]){
    // base case
    if(idx<0) return INT_MIN;
    // this says return maximum of current idx and the function value that returns
    return max(arr[idx], print(idx-1, arr));
}
int main(){
    int arr[]={1,2,3,4,9,3,6,23};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"maximum element of arr is: "<< print(n-1,arr)<< endl;
}