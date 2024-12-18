// predict the output
// dry run in page number - 3

#include<iostream> 
using namespace std;
void pip(int n){
    // base case
    if(n==0) return;

    cout<<"pre "<< n<< ", ";
    pip(n-1);
    cout<<"In "<< n<< ", ";
    pip(n-1);
    cout<<"post "<< n<< ", ";
}

int main(){
    pip(3);
}