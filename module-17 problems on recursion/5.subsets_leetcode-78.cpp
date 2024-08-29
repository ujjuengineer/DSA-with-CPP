// subsets
// print subsets of a string with unique characters. 
// do it for array as well
// note that number of subsets = 2 to the power n where n = number of elements in sets





#include<iostream>
using namespace std;

void printSubsets(string original, string ans){
    // base case
    if(original.size()==0){
        cout<< ans<< " ";
        return;
    }
    /* ek call lgana hai ans me bina add kiye and dushri call lgana ans me add kr k */
    printSubsets(original.substr(1), ans);
    printSubsets(original.substr(1), ans+=original[0]);   
}


int main(){
    string original = "abc";
    string ans = "";
    printSubsets(original, ans);
}