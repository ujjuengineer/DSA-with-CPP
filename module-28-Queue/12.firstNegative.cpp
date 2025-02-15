// first negative in each window of size k

/*
Given an array arr[]  and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.

Note: If a window does not contain a negative integer, then return 0 for that window.

Examples:

Input: arr[] = [-8, 2, 3, -6, 10] , k = 2
Output: [-8, 0, -6, -6]
Explanation:
Window {-8, 2}: First negative integer is -8.
Window {2, 3}: No negative integers, output is 0.
Window {3, -6}: First negative integer is -6.
Window {-6, 10}: First negative integer is -6.
Input: arr[] = [12, -1, -7, 8, -15, 30, 16, 28] , k = 3
Output: [-1, -1, -7, -15, -15, 0] 
Explanation:
Window {12, -1, -7}: First negative integer is -1.
Window {-1, -7, 8}: First negative integer is -1.
Window {-7, 8, -15}: First negative integer is -7.
Window {8, -15, 30}: First negative integer is -15.
Window {-15, 30, 16}: First negative integer is -15.
Window {30, 16, 28}: No negative integers, output is 0.
Input: arr[] = [12, 1, 3, 5] , k = 3
Output: [0, 0] 
Explanation:
Window {12, 1, 3}: No negative integers, output is 0.
Window {1, 3, 5}: No negative integers, output is 0.

*/



#include <iostream>
#include<vector>
#include<stack>
#include <sstream>
using namespace std;


vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
    
    int s = arr.size();
    vector<int> ans(s-k+1);
    queue<int> q;
    for (int i = 0; i<arr.size(); i++) {
        if (arr[i] < 0) q.push(i);
    }
    
    int i = 0;
    while (i<s-k+1) {
        
        while (q.size()>0 && q.front() < i) q.pop();
        
        if (q.size() == 0) ans[i] = 0;
        else if (q.front() >= i + k) ans[i] = 0;
        else ans[i] = arr[q.front()];
        
        i++;
    }
    return ans;
}


int main() {
    int arr[] = {-8, 2, 3, -6, 10} , k = 2;
    int s = sizeof(arr) /sizeof(arr[0]);

    vector<int> v(arr, arr+s);
    vector<int> ans = FirstNegativeInteger(v,k);

    for (int i = 0; i<s; i++) {
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}