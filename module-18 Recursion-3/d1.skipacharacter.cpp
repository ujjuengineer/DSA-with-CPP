//remove all occurrence of 'a' from a string

// first meathod, if we have string "abac", then at every recursion we will pass after removing the first element, and check wether the first element of the new string is 'a' or not, if it is not then we will add that character in ans string

#include<iostream>
#include<string>
using namespace std;
void skip(string original, string ans){
    int n = original.size();
    // base case
    if(n==0){
        cout<< ans<< endl;
        return;
    }


    if(original[0] != 'a'){
        ans += original[0];
    }
    skip(original.substr(1), ans);   
}
// its time and space complexity is very poor as at every recursion it is creating new string "substr(1)", which is not very space efficient, we can avoid this using index


int main(){
    string str = "ujjwal kumar";
    int n = str.size();
    skip(str,"");
}