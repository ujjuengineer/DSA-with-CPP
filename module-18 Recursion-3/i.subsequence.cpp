// subsequence are actually subsets of a particular length
// for instance, subsets of 123 are 1,2,3,12,13,23,123,"" 
// subsequence of length 2 are : 12,13,23

// print all the increasing sub-sequences of length k from first n natural numbers
// input: k = 3,n=3 output: 123,

// since we have to find subsequence from first n  natural number, if k = 3 and n=5 then assume a array 1,2,3,4,5 and find all the subsets of 3 length

// what we will do is just make a checkpoint that wether subset ka size==3 hai ya nhi,if it is = 3 then we will print it other wise we will skip that printing

#include<iostream>
#include<vector>
using namespace std;

void subset(int idx, int n, int k, int arr[], vector<int> ans){
    // base case
    if(idx==n){
        if(ans.size()==k){
            for(int i=0; i<ans.size(); i++){
                cout<< ans[i];
            }
            cout<< endl;
        }
        return;
    }
    // to print subset ek call without adding and dushra call with adding
    subset(idx+1, n,k,arr,ans);
    ans.push_back(arr[idx]);
    subset(idx+1,n,k,arr,ans);
}

int main(){
    int n;
    cout<<"enter n: ";
    cin>>n;
    
    int arr[n];
    for(int i=1; i<=n; i++){
        arr[i-1]=i;
    }

    int k;
    cout<<"enter k: ";
    cin>> k;

    vector<int> v;
    subset(0,n,k,arr,v);

}
