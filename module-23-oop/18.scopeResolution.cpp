#include<iostream>
using namespace std;

// scope resolution operator can be used to access the global variable of smae name as of local variable , for example

int x = 5;

int main(){

    int x = 10;

    // if we do cout << x then it will print 10, but if we use scope resolution operetor then we can print global x

    cout << ::x << endl;

}