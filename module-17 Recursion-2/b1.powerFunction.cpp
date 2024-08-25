// M-1 (bekar hai)
// time complexity : O(n); , where n = power
#include<iostream>
using namespace std;

int fun(int exp, int pow){
    // 2 to the power 5 = 2 * 2 the power 4
    if(pow==0) return 1;
    else if(pow==1)return exp;
    return exp * fun(exp, pow-1);
}

int main(){
    int exp, pow;
    cout<<"enter exponent and power: ";
    cin>>exp>>pow;
    cout<<exp<<" to the power "<< pow <<" = " << fun(exp, pow)<< endl;
}