#include<iostream>
#include<vector>
using namespace std;
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        // creating prefix sum
        vector<int> prefixSum(n);
        int sum = 0;
        for(int i = 0; i<n; i++){
            sum += nums[i];
            prefixSum[i] = sum;
        }
        
        int m = queries.size();
        vector<int> ans(m);
        for(int i = 0; i<m ; i++){
            int lo = 0, hi = n-1;
            while(lo<=hi){
                int mid = lo + (hi-lo)/2;
                if(prefixSum[mid]<=queries[i]){
                    ans[i] = mid + 1;
                    lo = mid + 1;
                }
                else hi = mid - 1;
            }
        }
        for(int ele: ans) cout<< ele << " ";
        cout<< endl;
        return ans;
    }

    int main(){
        int arr1[]={4,5,2,1};
        int n = sizeof(arr1)/sizeof(arr1[0]);
        vector<int> nums(arr1, arr1+n);

        int arr2[]={3,10,21};
        int m = sizeof(arr2)/sizeof(arr2[0]);
        vector<int> queries(arr2, arr2+m);

        answerQueries(nums, queries);
    }