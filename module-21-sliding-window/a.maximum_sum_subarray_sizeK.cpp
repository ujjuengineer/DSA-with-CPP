// maximum sum of subarray of size of k 

// using brut force meathod

#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6}; // 9 - 3 = 6
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 3;

    int sum, maxSum = INT_MIN;
    for(int i = 0; i<=n-k; i++){
        sum = 0;
        for(int j = i; j<i+3; j++){
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }

    cout<< "max sum is "<< maxSum<< endl;
}