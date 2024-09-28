// max sum of subarray of size k, using sliding window

/*
algo: 
    we will first find sum of first window and store it somewhere
    then we will apply loop and remove the first element of prev window from sum and add the last element of current window in the sum.
*/
#include<iostream>
using namespace std;
int main(){
    int arr[]={7,1,2,5,8,4,9,3,6}; // 9 - 3 = 6
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 4;
    
    int currSum = 0;
    // finding sum of first window
    for(int i = 0; i<k; i++){
        currSum += arr[i];
    }

    // finding max sum of using window
    int i = 1, j = k;
    int maxSum = currSum;
    int idx = 0;
    while(j<n){
        currSum = currSum - arr[i-1] + arr[j];
        if(currSum > maxSum){
            maxSum = currSum;
            idx = i;
        }
        i++, j++;
    }
    cout<< "max sum is "<< maxSum <<" and window starts from "<< idx << endl;
}