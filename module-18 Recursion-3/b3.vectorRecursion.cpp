// we can similarly do recursion in vector as well

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& arr, int n){
    // base case
    if(n<0) return;

    display(arr, n-1); // recursion krte krte n==0 tak chla jaaega, and return time pr print kr dega, when return time pr n==1 hoga, then arr[0] print krega, when n = 2 hoga, arr[1] print krega and so on.
    cout<< arr[n]<<" ";
}
int main(){
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.push_back(5);

    int n = arr.size();
    display(arr, n-1); // sent last index
}