// palindrome is a word which after reversing remains the same

#include<iostream>
using namespace std;

bool isPalindrome(string s, int idx1, int idx2){
    // base case
    if(idx1>idx2) return true;

    if(s[idx1]!=s[idx2])return 0;
    else return isPalindrome(s, idx1+1, idx2-1);
}

int main(){
    string s = "sitaram";
    bool ans = isPalindrome(s, 0, s.size()-1);

    if(ans==1)cout<< s << " is a palindrome"<< endl;
    else cout<< s << " is not a palindrome"<< endl;
}