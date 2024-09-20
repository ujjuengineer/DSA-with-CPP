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
    
    // creating suffix product
    vector<int> suffixProduct(n,1);
    int product = 1;
    for(int i = n-2; i>=0; i--){
        product *= nums[i+1];
        suffixProduct[i]=product;
    }

    // creating prefix product inside of nums
    int temp2 = nums[0];
    nums[0]=1;
    int temp1;
    for(int i = 1; i<n; i++){
        temp1 = temp2;
        temp2 = nums[i];
        nums[i]= nums[i-1]*temp1;
    }

    for(int i = 0; i<n; i++){
        nums[i]=nums[i]*suffixProduct[i];
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