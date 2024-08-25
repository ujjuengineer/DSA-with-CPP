/* LeetCode - 680

Given a string s, return true if the s can be palindrome after deleting at most one character from it.

Example 1:
Input: s = "aba"
Output: true

Example 2:
Input: s = "abca"
Output: true
Explanation: You could delete the character 'c'.

Example 3:
Input: s = "abc"
Output: false 

*/
#include<iostream>
using namespace std;
bool check(string s, int lo, int hi){
    while(lo<=hi){
        if(s[lo]!=s[hi])return false;
        lo++; hi--;
    }
    return true;
}
bool validPalindrome(string s){
    int count = 0;
    int n = s.size();
    int lo = 0, hi = n-1;
    while(lo<=hi){
        if(s[lo]==s[hi]){
            lo++; hi--;
        }
        else{
            return (check(s, lo+1, hi) || check(s, lo, hi-1));
        }
    }
    return true;
}




int main(){
    string s = "abc";
    cout<< validPalindrome(s);
}