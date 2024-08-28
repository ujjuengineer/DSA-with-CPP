// print all the elements of an array using recursion

#include<iostream>
using namespace std;

void print(int arr[], int size, int idx){
    // base case
    if(idx == size) return;

    cout<< arr[idx]<<" ";
    print(arr, size, idx+1);
}

int main(){
    int n;
    cout<<"enter size : ";
    cin>> n;
    int arr[n];
    cout<<"enter elements : ";
    for(int i=0; i< n; i++){
        cin >> arr[i];
    }
    cout<< endl;

    print(arr, n, 0);
}