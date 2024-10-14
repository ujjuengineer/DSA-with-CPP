#include<iostream>
using namespace std;

bool helper(int n) {
    int sum = 0;
    for(int i = 1; i<n; i++){
        if(n%i==0) sum += i;
    }
    if(sum==n) return true;
    else return false;
}

int main(){
    int n; 
    cout<<"enter a nubmer: ";
    cin >> n;


    int count = 0; // 4
    for(int i = 1; count < n; i++) {
        if(helper(i)){
            count++;
        }
        if(count==n) cout<< i <<" is nth perfect number";
    }
}