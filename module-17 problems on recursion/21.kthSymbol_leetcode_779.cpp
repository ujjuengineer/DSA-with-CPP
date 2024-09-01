/* 
We build a table of n rows (1-indexed). We start by writing 0 in the 1st row. Now in every subsequent row, we look at the previous row and replace each occurrence of 0 with 01, and each occurrence of 1 with 10.

For example, for n = 3, the 1st row is 0, the 2nd row is 01, and the 3rd row is 0110.
Given two integer n and k, return the kth (1-indexed) symbol in the nth row of a table of n rows.

Example 1:
Input: n = 1, k = 1
Output: 0
Explanation: row 1: 0

Example 2:
Input: n = 2, k = 1
Output: 0
Explanation: 
row 1: 0
row 2: 01*/

// solution

/* if n = a and k = b, it means ath line ka bth element kya hoga, we can solve this using 2d vector but we have a better approach of time complexity O(n) to solve this.

if you create a tree diagram, you will observ following point 
-> in every line odd position 0s comes from 0s of previous line 
-> even position 0s comes from 1s of previous line
-> similarly with 1s, that is odd position 1s comes from 1s of prev line and even position 1s comes from 0s of prev line

-> another observation, if elements are at an even position m, then it comes from m/2 position elements of prev line 
-> odd position(say n) element comes from n/2 + 1 position of prev line elements

=> we will make 2 calls depending upon elements are wether at even position or at odd 

-> for the base case it is given that the first line element = 0
*/

#include<iostream>
using namespace std;

int kthGrammar(int n, int k) {
        // base case
        if(n==1) return 0;

        // if k is even, we have to flip 
        if(k%2==0){
            int prevAns = kthGrammar(n-1, k/2);
            // since it is even we have to make 0s -> 1 and 0s->0
            if(prevAns==1) return 0;
            else return 1;
        }
        else{
            // if k is odd then we don't have to flip the answer
            return kthGrammar(n-1, (k/2)+1);
        }
        return 0;
}

int main(){
    int n;
    cout<< "enter line number: ";
    cin>> n;
    int k;
    cout<<"enter element's position: ";
    cin>> k;

    cout<< kthGrammar(n,k)<< endl;
}