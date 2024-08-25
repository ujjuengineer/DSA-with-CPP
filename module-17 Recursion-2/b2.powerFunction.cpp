// M-2 better approach 
// time complexity : 2n-1 where n is the power
#include<iostream>
using namespace std;

#include<iostream>
using namespace std;


// 2 to the power 4 = 2 to the power 2 * 2 to the power 2
// 2 to the pwer 7 = 2 to the power 3 * 2 to the power 3 * 3
int fun(int exp, int pow, int &ans){
    // base case
    if(pow==0) return 1;
    else if(pow==1)return exp;

    if(pow % 2 == 0){
        // ans = fun(exp, pow/2, ans) * fun(exp, pow/2, ans);
        return fun(exp, pow/2, ans) * fun(exp, pow/2, ans);
    }
    else return fun(exp, pow/2, ans) * fun(exp, pow/2, ans) * exp ;
    // else ans = fun(exp, pow/2, ans) * fun(exp, pow/2, ans) * 2 ;


    //return ans;

    // note that at evrery call we will create a new box ans, and this newely created and previosly created ans are 2 different box !!!!
    // we could have also done as 
    // if(pow%2==0) return fun(exp, pow/2, ans) * fun(exp, pow/2, ans);
    // else return fun(exp, pow/2, ans) * fun(exp, pow/2, ans) * 2 ;
    
}

int main(){
    int exp, pow;
    cout<<"enter exponent and power: ";
    int ans;
    cin>>exp>>pow;
    cout<<exp<<" to the power "<< pow <<" = " << fun(exp, pow, ans)<< endl;
}