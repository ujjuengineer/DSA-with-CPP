#include<iostream>
using namespace std;
int main() {

    /* let understand the meaning of left shift */
    int x = 9; // in binary it is 1001
    int y = x<<2; // it means x ke binary form me 2 zero last me shift kr do 1001 => 100100 (decimal value = 36)
    cout << y << endl;

    /* let understand the meaning of right shift */
    x = 9; // 1001
    y = x >> 2; // iska mtlb hai x ke binary form me last ka 2 digit delete kro 1001 => 10
    cout<< y << endl;
}