// power function (logarithmic)

// page-1 of notes copy

#include<iostream> 
using namespace std;

int po(int a, int b){
    // base case
    if(b==0) return 1;
    

    int x = po(a,b/2);
    
    if(b%2==0) return x * x;
    else return a * x * x;
    
    // use stack to dry run and check

    /*

    for simplicity we can do
    if(b%2==0) return po(a,b/2) * po(a,b/2);
    else return a * po(a,b/2) * po(a,b/2);
    
    */
}

int main(){
    int exp, pow;
    cout<< "exponent: ";
    cin>> exp;
    cout<< "power : ";
    cin>> pow;

    cout<< exp <<" to the power "<< pow <<" is "<< po(exp, pow) << endl;
}