// we can do the same with array
#include<iostream>
#include<vector>
#include<vector>
using namespace std;

// note: yaha ans vector is acting like a ans string in previous string question, so we won't pass its adress, we will pass it as whole 
void arraySubset(int arr[], int n,int idx,vector<int> ans){
    // base case
    if(idx==n){
        for(int ele: ans){
            cout<<ele;
        }
        cout<< endl;
        return;
    }
    // yaha v same krna hai, ek baar bina add kre call lgana hai and ek baar add kr k call lgana hai
    // but yaha pe hum log add nhi kr skte just like string so we push back before calling
    arraySubset(arr,n,idx+1,ans);
    ans.push_back(arr[idx]);
    arraySubset(arr,n,idx+1,ans);
}

int main(){
    int arr[]={1,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    
    vector<int> ans; // this will store temperory ans ans will be created new at every recursion just like ans string in the previous cases

    arraySubset(arr,n,0,ans);

}