// remove all occurrece of 'a' from a string 

#include <iostream>
using namespace std;

void call(string str, string ans, int idx){
    // base case
    if(idx==str.size()){
        cout<< ans;
        return;
    }
    if(str[idx]!='a') ans+=str[idx]; 
    call(str, ans, idx+1);
}

int main(){
    string str;
    cout<<"enter string : " ;
    getline(cin, str);

    string ans = "";
    call(str, ans, 0);
}