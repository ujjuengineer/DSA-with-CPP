#include<iostream>
using namespace std;

int partition(int arr[], int si, int li){
    int pivotelement = arr[si];
    int count = 0;
    for(int i = si+1; i<=li; i++){
        if(arr[i]<=pivotelement) count++;
    }
    int pivotidx = count + si;

    // have to swap previous pivotelement and new pivot element
    swap(arr[si], arr[pivotidx]);

    // put all element smaller than pivot element to the left 
    int i = si;
    int j = li;
    while(i<pivotidx && j>pivotidx){
        if(arr[i]<=pivotelement) i++;
        if(arr[j]>pivotelement) j--;
        else if(arr[i]>pivotelement && arr[j]<=pivotelement){
            swap(arr[i], arr[j]);
            i++; j--;
        }
    }
    return pivotidx;
}

void quicksort(int arr[], int si, int li){
    // base case
    if(si>=li) return;

    int pi = partition(arr, si, li);

    quicksort(arr, si, pi-1);
    quicksort(arr, pi+1, li);
}

int main(){
    int arr[]={3, 4, 6, 2, 1, 4 };
    int n = sizeof(arr)/sizeof(arr[0]);

    quicksort(arr, 0, n-1);

    for(int i = 0; i< n; i++){
        cout<< arr[i]<<" ";
    }
}