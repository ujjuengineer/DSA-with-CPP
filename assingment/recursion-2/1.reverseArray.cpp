// print all the elements of an array in reverse order

#include<iostream>
using namespace std;

void fun(int arr[], int ptr, int size){
    // base case
    if(ptr==size) return;
    
    fun(arr, ptr+1, size);
    cout<< arr[ptr]<<" ";
}
int main(){
    int arr[]={1,2,3,4,5};

    fun(arr, 0, 5);
}