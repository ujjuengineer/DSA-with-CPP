#include<iostream>
using namespace std;

int binary_to_decimal(string &str){
    // 0110101
    int n = str.size();
    int sum = 0;
    int num = 0;
    int ptr = n-1;
    int i = 1;
    while(ptr > 0){
        char ch = str[ptr]; // extract characters form str
        int num = ch - '0'; // convert the characters in num
        sum = sum + (i*num);
        i += i;
        ptr--;
    }
    return sum;
}

int main(){
    string str = "0101";
    cout << binary_to_decimal(str)<< endl;
}