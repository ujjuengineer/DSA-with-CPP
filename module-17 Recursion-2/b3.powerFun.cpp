// M-3

#include<iostream>
using namespace std;

int fun(int exp, int pow, int &ans){
    // base case
    if(pow==0) return 1;
    else if(pow==1)return exp;
    
    ans = fun(exp, pow/2, ans);
    
    if(pow%2==0) return ans*ans;
    else return ans*ans*exp ;
}

int main(){
    int exp, pow;
    cout<<"enter exponent and power: ";
    cin>>exp>>pow;
    int ans;
    cout<<exp<<" to the power "<< pow <<" = " << fun(exp, pow, ans)<< endl;
}