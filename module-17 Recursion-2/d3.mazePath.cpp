// we can even pass 2 argumant and archive our answer, we will pass only ending point and assume that its starting point and ending point is (1,1)
#include<iostream>
using namespace std;
void fun(int sr, int sc, string s){
    // base case
    if(sr<1 || sc<1) return;
    if(sr==1 && sc==1)cout<<s<<endl;
    
    fun(sr-1, sc, s+'D');
    fun(sr, sc-1, s+'R');
}
int main(){
    fun(3,3,"");
}