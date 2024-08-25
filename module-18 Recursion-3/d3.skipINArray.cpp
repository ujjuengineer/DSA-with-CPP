// skiping all the 4s from array

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void skip(int arr[],int idx, vector<int>& v){
    // base case
    if(idx<0){
        reverse(v.begin(), v.end()); // we pushed in v in opposite direction so we reversed it at lase
        return;
    }
     if(arr[idx]!=4){
        v.push_back(arr[idx]);
     }
     skip(arr, idx-1, v);
}



int main(){
    int arr[]={1,2,1,3,4,2,4,5,6,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v;
    
    skip(arr, n-1, v); // n-1 is the lase index of the arr

    // printing vector
    for(int i=0; i<v.size(); i++){
        cout<< v[i]<< " ";
    }
}