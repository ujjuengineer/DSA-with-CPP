#include<iostream>
#include<vector>
using namespace std;

    void helper(string temp, int cl, int op, vector<string>& ans, int n){
        // base case
        if(cl==n && op==n){
            ans.push_back(temp);
            return;
        }
        if(op<n) helper(temp+'(', cl, op+1, ans, n);
        if(cl<op) helper(temp+')', cl+1, op, ans, n);
    }


int main(){
    int n;
    cout<<"enter the number of parenthesis: ";
    cin>> n;
    vector<string> ans;
    helper("",0,0,ans,n);

    for(string ele: ans){
        cout<< ele<<" ";
    }
}