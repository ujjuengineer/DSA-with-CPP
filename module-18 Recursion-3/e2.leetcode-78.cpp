// we can even store the subsets of the string

#include<iostream>
#include<vector>
using namespace std;


// note: yaha vector pass by adress hua hai
void storeSubstring(string original, int idx, string ans, vector<string>& v){
    if(idx==original.size()){
        v.push_back(ans);
        return;
    }
    // ek baar bina add kre call lgana hai and ek baar add kr k call lgana hai
    storeSubstring(original,idx+1,ans,v);
    storeSubstring(original,idx+1,ans+original[idx],v);
    
}
int main(){
    string str = "abc";
    int n = str.length();
    vector<string> v;
    storeSubstring(str,0,"",v);

    for(string ele: v){
        cout<< ele<< endl;
    }
}