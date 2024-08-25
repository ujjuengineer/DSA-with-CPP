// find the sum of n natural number 

#include<iostream>
using namespace std;
void sumOfN(int n, int sum){
    if(n==0){
        cout<< "sum of 1 to n"<< " is "<< sum;
        return;
    }
    
    sumOfN(n-1, sum + n); // (3,4)->(7,2)->(9,1)->(10,0)     
}

int main(){
    int n;
    cout<< "enter n: ";
    cin >> n; // 4
    int sum = 0;
    sumOfN(n, sum);
}