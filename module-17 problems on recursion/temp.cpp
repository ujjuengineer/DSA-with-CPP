#include<iostream>
#include<vector>
using namespace std;

void displaySubset(string original, string ans, bool flag){
    
    char ch = original[0];
    if(original.size()==1){
        displaySubset(original.substr(1), ans, true);
        displaySubset(original.substr(1), ans+original[0], true);
    }
    else{
        char ph = original[1];
        if(ch==ph){
            flag = false;
        }
        else flag =  true;
    }
}

int main(){
    string str = "aab";
    int n = str.size();
}