/*
Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.

 */

 // folloup can we solve this problem in O(n) space complexity and O(n) time complexity, the array made 


 #include <iostream>
 #include <vector>
 using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    // creating prefix product
    vector<int> prefixProduct(n,1);
    long long product = 1;
    for(int i = 1; i<n; i++){
        product *= nums[i-1];
        prefixProduct[i] = product;
    }
    // for(int ele: prefixProduct) cout<< ele <<" ";

    // creating suffix product
    vector<int> suffixProduct(n,1);
    product = 1;
    for(int i = n-2; i>=0; i--){
        product *= nums[i+1];
        suffixProduct[i]=product;
    }
    // for(int ele: suffixProduct) cout<< ele <<" ";

    for(int i = 0; i<n; i++){
        nums[i]=prefixProduct[i]*suffixProduct[i];
    }

    return nums;
}

 int main(){
    // given vector
    int arr[]={1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> nums(arr, arr+n);
    productExceptSelf(nums);
    for(int ele: nums) cout << ele <<" ";
 }