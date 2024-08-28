#include<iostream>
using namespace std;

void call(string str, string ans, int idx){
    // base
    if(idx== str.size()){
        cout<< ans<< endl;
        return;
    }

    // yaha humne call me hi add kr ke bhej diya hai, but this not a good practice
    if(str[idx]!='a') call(str, ans+str[idx], idx+1);
    else call(str, ans, idx+1);
}

int main(){
    string str;
    cout<< "enter your string : ";
    getline(cin, str);

    string ans = "";
    call(str, ans, 0);
}