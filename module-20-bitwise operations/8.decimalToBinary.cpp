#include<iostream>
#include<string>
using namespace std;

string decimal_to_binary(int n){
    string str = "";
    while(n != 0){
        if(n % 2 == 0) str = '0' + str;
        else str = '1' + str;
        n /= 2;
    }
    return str;
}

int main(){
    
    // if you notice when num is even, we upend a 0 in the string, when num is odd then we upend a 1 in string

    int n;
    cout << "enter n: ";
    cin >> n;
    cout << decimal_to_binary(n);
}