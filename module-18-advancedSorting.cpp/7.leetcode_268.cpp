// missing number
// Given an array nums containing n distinct numbers in the range 
// [0, n], return the only number in the range that is missing from the array.

// M-1 : using extra space
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={9,6,4,2,3,5,7,0,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    // we will create a vector check, and initialise it with false;
    vector<bool> v(n+1,0);
    // n+1 size ka vector bnaya kyuki, 1 extra space hona chahiye check krne k liye ki kon sa number missing hai

    for(int i = 0; i<n; i++){
        int idx = arr[i];
        v[idx] = 1;
    }
    for(int ele: v) cout<< ele << " ";
    cout<< endl;


    // checking that which idx have value = 0
    for(int i = 0; i<v.size(); i++){
        if(v[i]==0) cout<< "missing element is : " << i<< endl;
    }
}

// m-2 using cyclic sort, and m-3 using sum