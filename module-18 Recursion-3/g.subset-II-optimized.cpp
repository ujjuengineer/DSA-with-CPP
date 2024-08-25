#include<iostream>
using namespace std;

void remove(string original, int n, string ans, bool flag,int idx){
    // base case
    if(idx==n){
        cout<< ans<< endl;
        return;
    }
    char ch = original[idx];
    if(n==1){
        remove(original, n, ans, true, idx+1);
        if(flag==true)remove(original,n,ans+ch,true,idx+1);
    }
    else{
        char ph = original[idx+1];
        if(ch==ph){
            remove(original, n, ans, false, idx+1);
            if(flag==true)remove(original,n,ans+ch,true,idx+1);
        }
        else{
            remove(original, n, ans, true, idx+1);
            if(flag==true)remove(original,n,ans+ch,true,idx+1);
        }
    }
}

int main(){
    string str = "aa";
    int n = str.size();
    remove(str, n, "", true,0);
}
// aab
// aa
// ab
// a
// b
