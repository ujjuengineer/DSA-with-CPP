// 
// we can even store all the sub sets of the array in a vector of vector and use it any where

#include<iostream>
#include<vector>
#include<vector>
using namespace std;


void arraySubset(int arr[], int n,int idx,vector<int> ans,vector< vector<int> >& v){
    // base case
    if(idx==n){
        v.push_back(ans);
        return;
    }
    // yaha v same krna hai, ek baar bina add kre call lgana hai and ek baar add kr k call lgana hai
    // but yaha pe hum log add nhi kr skte just like string so we push back before calling
    arraySubset(arr,n,idx+1,ans,v);
    ans.push_back(arr[idx]);
    arraySubset(arr,n,idx+1,ans,v);
}

int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector< vector<int> > v; // this will store all the sub-string    
    vector<int> ans; // this will store temperory ans ans will be created new at every recursion just like ans string in the previous cases

    arraySubset(arr,n,0,ans,v);



    // this is how we print a 2-d vector of unsymmetric size
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<< v[i][j];
        }
        cout<< endl;
    }
}