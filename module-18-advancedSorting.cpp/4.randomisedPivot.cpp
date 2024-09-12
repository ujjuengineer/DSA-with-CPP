// using a random pivot rather than lo or hi we can improve the time complexity of the quick sort
#include<iostream>
#include<vector>
using namespace std;

int helper(int arr[], int si, int ei){
    int pivotelement = arr[(si+ei)/2];
    int count = 0;
    for(int i=si; i<=ei; i++){
        if(i==(si+ei)/2) continue;
        if(arr[i]<pivotelement) count++;
    }

    int pivotidx = count + si;

    swap(arr[(si+ei)/2], arr[pivotidx]);

    int i = si, j = ei;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<arr[pivotidx]) i++;
        if(arr[j]>arr[pivotidx]) j--;
        if(arr[j]<arr[pivotidx] && arr[i]>arr[pivotidx]){
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }

    return pivotidx;
}

void quicksort(int arr[], int si, int ei){
    // base case
    if(si>=ei){
        return;
    }

    int pi = helper(arr, si, ei);

    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, ei);
}

int main(){
    int arr[]={5,1,8,2,7,6,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    for(int i = 0; i< n; i++){
        cout<< arr[i]<<" ";
    }
}