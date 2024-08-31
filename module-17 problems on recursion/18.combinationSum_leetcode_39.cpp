// we have to return the combination of elements which sumup to the target

#include<iostream>
#include<vector>
using namespace std;

void combination(vector<int> v, int arr[], int n, int target, int idx){
    // base case
    if(target==0){
        for(int i=0; i<v.size(); i++){
            cout<< v[i];
        }
        cout<< endl;
        return;
    }
    if(target<0 || idx == n) return;

    // we have two option, either we can choose that element or we can skip that element, if we skiped that element it means, we have no use of that and we will move to the next index, otherwise we will remain with the same idx;
    // we use pop back so that at last when the sum of v exceeds, then we can
    v.push_back(arr[idx]);
    // combination(v, arr, n, target-arr[idx], idx);
    // v.pop_back();
    combination(v, arr, n, target-arr[idx], idx+1);
    v.pop_back();
}

int main(){
    vector<int> v;
    int arr[]={2,3,5};
    int n = sizeof(arr)/sizeof(arr[0]);

    combination(v, arr, n, 8, 0);
}