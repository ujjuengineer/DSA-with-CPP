// print subsets of a string with unique characters.
// follow UP: do it for array as well


// note that number of subsets = 2 to the power n where n = number of elements in sets


#include<iostream>
using namespace std;
void displaySubset(string original, int idx, string ans){
    if(idx==original.size()){
        cout<< ans<< endl;
        return;
    }
    // ek baar bina add kre call lgana hai and ek baar add kr k call lagana hai
    displaySubset(original,idx+1,ans);
    displaySubset(original,idx+1,ans+original[idx]);
    
}
int main(){
    string str = "abc";
    int n = str.length();
    displaySubset(str,0,"");
}