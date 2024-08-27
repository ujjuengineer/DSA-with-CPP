// predict the output
// dry run in page number - 3

#include<iostream> 
using namespace std;
void pip(int n){
    // base case
    if(n==0) return;

    cout<<"pre "<< n<< endl;
    pip(n-1);
    cout<<"In "<< n<< endl;
    pip(n-1);
    cout<<"post "<< n<< endl;
}

int main(){
    pip(3);
}