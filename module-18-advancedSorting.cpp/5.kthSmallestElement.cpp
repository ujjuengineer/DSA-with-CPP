// write a programe to find kth smallest element
#include<iostream>
#include<vector>
using namespace std;

int helper(int arr[], int si, int li){
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
int kthSmallest(int arr[], int fi, int li, int k){
    int pi = helper(arr, fi, li);
    if(pi+1==k) return arr[pi];
    else if(pi+1 > k) return kthSmallest(arr, fi, pi-1, k);
    else return kthSmallest(arr, pi+1, li, k);
}
int main(){
    int arr[]={1,9,3,5,7,8,4,3,2,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n; i++){
        cout<< arr[i]<<" ";
    }
    cout<< endl<<endl;
    int k = 6;
    cout<< kthSmallest(arr,0,n-1,k);
}