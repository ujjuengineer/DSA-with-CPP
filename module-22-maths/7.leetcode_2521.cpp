#include<iostream>
using namespace std;
bool isPrime(int n) {
    for(int i = 2; i<=sqrt(n); i++) {
        if(n%i==0) return false;
    }
    return true;
}
void fillPrime(vector<int>& prime, int mx) {
    for(int i = 2; i<=mx; i++) {
        if(isPrime(i)) prime.push_back(i);
    }
}
int distinctPrimeFactors(vector<int>& nums) {
    int n = nums.size();

    // finding max element
    int mx = 0;
    for(int i = 0; i<n; i++) {
        mx = max(mx,nums[i]);
    }

    vector<int> prime;
    fillPrime(prime, mx);

    vector<bool> check(prime.size(), 0);

    for(int i = 0; i < n; i++) {
        for(int j = 0; j<prime.size(); j++) {
            if(prime[j] > nums[i]) break;
            if(nums[i] % prime[i] == 0) check[j] = 1;
        }
    }
    int count = 0;
    for(int i = 0; i<check.size(); i++) {
        if(check[i]==1) count++;
    }
    return count;
}
int main() {
    int arr[] = {2,4,3,7,13,6};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> nums(arr, arr+n);
    cout<< distinctPrimeFactors(nums);
    
}