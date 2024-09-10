// inbuilt sort uses quick sort technique to sort the array or vec
// it's time complexity is O(log n) and space complexity is O(log n) as well

// merge sort

#include<iostream>
#include<vector>
using namespace std;
int find_pi(vector<int>& v, int si, int li){
    int count = 0;
    for(int i=1; i<v.size(); i++){
        if(v[i]>=v[si]) count++;
    }

    int pivot = si + count;
    // swapping with count index
    swap(v[si], v[count]);

    // now send all ele smaller than pivot index to its left and all ele greater than pivot index to its right
    int i = si, j = li;
    while(i<=j){
        if(v[i]<=v[pivot]) i++;
        if(v[j]>=v[pivot]) j--;
        if(v[i]>v[pivot] && v[j]<v[pivot]){
            swap(v[i], v[j]);
            i++, j--;
        }
    }

    return count;
}
void quicksort(vector<int>& v, int si, int li){
    // base case
    if(si>=li) return;

    int pi = find_pi(v, si, li);

    quicksort(v, si, pi-1);
    quicksort(v, pi+1, li);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr+n);

    quicksort(v, 0, n-1);

    for(int ele: v){
        cout<< ele<<" ";
    }
    
}