// print subset of string containing duplicate characters
#include<iostream>
using namespace std;
/*
algo: we have to compare the current char of original to its neighbour and check wether they are same or not, if they are same then we will pass false in the second call.
the false call make sure that we only make one call. see the notes for better understanding.
*/
void remove(string original, int n, string ans, bool flag){
    if(original.size()==0){
        cout<< ans << endl;
        return;
    }
    
    char ch = original[0];
    // if size if 1 then we can't compare it with next char
    if(original.size()==1){
        if(flag==true)remove(original.substr(1), n, ans+ch,true);
        remove(original.substr(1), n, ans, false);
    }
    else{
        char ph = original[1];
        // agar ph=th hai, jis call me add kr rhe hai usme false pass kr denge
        if(ch==ph){
            // first call tabhi chlegi jab flag = true hai
            if(flag==true)remove(original.substr(1), n, ans+ch,true);
            remove(original.substr(1), n, ans, false);
        }
        else{
            // agar ph!=th hai then dono call me true pass ho jaaega
            if(flag==true)remove(original.substr(1), n, ans+ch,true);
            remove(original.substr(1), n, ans, true);
        }
    }
}

int main(){
    string str = "aab";
    int n = str.size();
    remove(str, n, "", true);
}