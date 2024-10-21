#include<iostream>
#include<string>
using namespace std;

int binary_to_decimal(string num){
    int n = num.size();
    int dig = 0;

    for(int i = n-1, x = 0; i>=0; i--,x++) {
        int ch = num[i] - '0';
        dig += (ch * (1 << x)); // n-i-1 give the 0,1,2.. as we keep moving towards msb
    }
    return dig;
}

int main(){
/*
    we will use bitwise operator for calculating 2 to the power x
*/  
    string num;
    cout << "enter num : ";
    cin >> num;

    cout << binary_to_decimal(num);
}