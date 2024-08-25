//remove all occurrence of 'a' from a string

// first meathod, if we have string "abac", then at every recursion we will pass after removing the first element, and check wether the first element of the new string is 'a' or not, if it is not then we will add that character in ans string

#include<iostream>
#include<string>
using namespace std;
void skip(string original, string ans, int idx){
    // base case
    if(idx==original.size()){
        cout<< ans<< endl;
        return;
    }
    
     if(original[idx]!='a'){
        ans += original[idx];
     }
     skip(original, ans, idx+1);
}



int main(){
    string str = "ujjwal kumar";
    int n = str.size();
    skip(str,"",0);
}