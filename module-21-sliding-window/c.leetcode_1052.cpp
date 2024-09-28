// grumpy bookstore owner - leetcode - 1052

#include<iostream>
#include<vector>
using namespace std;

    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        /*
            customers = [1,0,1,2,1,1,7,5] -> number of cus at ith min
            grumpy = [0,1,0,1,0,1,0,1] -> 1 means grumpy 
            minutes = 3 -> for 3 consecutive minutes he can be without being grumpy

            algo: have to return maximum number of cus that can be satisfies, 
                     we will find a window where maximum number of customer is
                     unsatisfies and then we will use the technique in that window
                     to not be grumpy.
        */
        
        int customersSize = customers.size();
        int grumpySize = grumpy.size();
        int k = minutes;

        // finding sum of unsatisfied in first window
        int sum = 0;
        for(int i = 0; i<k; i++){
            if(grumpy[i]==1) sum += customers[i];
        }

        // finding max unsatisfied in a window
        int maxSum = sum;
        int idx = 0;
        int i = 1, j = k;
        while(j<customersSize){
            if(grumpy[i-1]==1) sum = sum - customers[i-1];
            if(grumpy[j]==1) sum = sum + customers[j];
            if(maxSum < sum){
                maxSum = sum;
                idx = i;
            }
            i++, j++;
        }
        // making the grumpy ele = 0 for max sum window
        for(int i = idx; i<idx+k; i++){
            grumpy[i] = 0;
        }

        // finding max number of satisfied customer
        int ans = 0;
        for(int i = 0; i<customersSize; i++){
            if(grumpy[i]==0) ans += customers[i];
        }
        return ans;
    }

int main(){
    int arr[] = {1,0,1,2,1,1,7,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> customers(arr, arr+n);


    int arr2[] = {0,1,0,1,0,1,0,1};
    vector<int> grumpy(arr2, arr2+n);

    int minutes = 3;

    cout<< maxSatisfied(customers, grumpy, minutes);
}