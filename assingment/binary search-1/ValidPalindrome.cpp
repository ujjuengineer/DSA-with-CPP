// leetcode - 125, Valid Palindrome 
/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

Example 1:
Input: s = "A man, a plan, a canal: Panama"
Output: true
Explanation: "amanaplanacanalpanama" is a palindrome.

Example 2:
Input: s = "race a car"
Output: false
Explanation: "raceacar" is not a palindrome.

Example 3:
Input: s = " "
Output: true
Explanation: s is an empty string "" after removing non-alphanumeric characters.
Since an empty string reads the same forward and backward, it is a palindrome.
*/

#include<iostream>
using namespace std;

bool isPalindrome(string s){
    int n = s.size();
    string newStr = "";
    for(int i=0; i<n; i++){
        char ch = s[i];
        if((ch>='a' && ch<='z') || (ch>='0'&& ch<='9')){
            newStr += ch;
        }
        if(ch>='A' && ch<='Z'){
            int ascii = (int)ch + 32;
            newStr += (char)ascii;
        }
    }
    int lo = 0, hi = newStr.size()-1;
    while(lo<=hi){
        if(newStr[lo]!=newStr[hi]){
            return false;
            break;
        }
        lo++; hi--;
    }
    return true;
}




int main(){
    string s = " ";
    cout<< isPalindrome(s);
}