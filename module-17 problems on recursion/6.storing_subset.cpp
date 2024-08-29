#include<iostream> 
#include<vector>
using namespace std;

void storeString(string original, string temp, vector<string>& ans, int idx){
    // base case
    if(idx==original.size()){
        ans.push_back(temp);
        return;
    }

    storeString(original, temp, ans, idx+1);
    storeString(original, temp+=original[idx], ans, idx+1);
}

int main(){
    string original = "abc";
    
    // creating vector to store the string
    vector<string> ans;
    storeString(original,"", ans, 0);

    // printing ans vector
    for(string ele: ans){
        cout<< ele<< " ";
    }
}