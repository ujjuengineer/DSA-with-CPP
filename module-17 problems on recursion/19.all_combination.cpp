// print all the combination, not just unique

#include<iostream>
#include<vector>

using namespace std;

void allCombination(vector<int> v, int arr[], int size, int target){
    if(target==0){
        for(int ele: v){
            cout<< ele;
        }
        cout<< endl;
        return;
    }
    if(target<0) return;
    for(int i=0; i<size; i++){
        v.push_back(arr[i]);
        allCombination(v, arr, size, target-arr[i]);
        v.pop_back();
    }
}
int main(){
    // for printing all combination we have to start with first index and check all the index element, wether they addup to the target or not
    // if they addup to the target we have to print that

    int arr[]={2,3,5};
    int target = 8;
    vector<int> v;

    allCombination(v, arr, 3, target);

}