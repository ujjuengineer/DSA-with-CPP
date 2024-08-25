// print the maximum value of array's element

#include<iostream>
using namespace std;
void display(int arr[], int idx, int &max){
    // base case
    if(idx<0){
        cout<<"max is : "<< max;
        return;
    };
    if(arr[idx]>max)max = arr[idx];
    display(arr, idx-1, max); 
}
int main(){
    int arr[]={2,6,3,5,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    display(arr, n-1, max);
}