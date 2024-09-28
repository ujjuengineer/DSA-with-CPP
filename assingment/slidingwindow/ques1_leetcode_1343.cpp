/*
given an array of integers arr and two integers k and threshold, return the number of sub-array of size k and avrage greater than or equal to threshold
*/

#include<iostream>
#include<vector>
using namespace std;

    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        // k is the window size
        // threshold is the avrage that we have given
        /*
        avr = x+y+z / n
        so rather finding avrage we can deal with x + y + z = avr*n
        */

        int n = arr.size();
        if(k==n) return 1;
        int target = threshold*k; 
        // now we have to check how many sub-arrays are there which can sumup to target or more

        int count = 0, sum = 0;
        // finding sum of first window
        for(int i = 0; i<k; i++){
            sum += arr[i];
        }
        if(sum >= target) count ++;
        int i = 1, j = i+k-1;
        while(j<n){
            sum += arr[j];
            sum -= arr[i-1];
            if(sum >= target) count++;
            j++; i++;
        }
        return count;
    }

int main(){
    int arr[]={2,2,2,2,5,5,5,8};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> arrr(arr, arr+n);
    int k = 3;
    int threshold = 4;

    cout<< numOfSubarrays(arrr, k, threshold);
}