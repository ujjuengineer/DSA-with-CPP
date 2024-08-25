#include<iostream>
using namespace std;
int main(){
    int x = 5;
    int* ptr = &x;
    cout<<ptr<<endl; //0x16b39f26c
    ptr = ptr + 1;
    cout<<ptr<<endl; //0x16ba27270
    /* if you notice the address then the difference is of 4 bytes. this is hexadecimal system consisting 16 digit 
    0 1 2 3 4 5 6 7 8 9 a b c d e f 
    

    0x16b39f26 c -> 0x16b39f26 d -> 0x16b39f26 e -> 0x16b39f26 f -> 0x16b39f2 70
    */

   cout<< endl;

   bool f = 0;
   bool* b = &f;
    cout<< b<< endl;
   b+=1;
   cout<< b<< endl;
   // notice the incriment in the address of b pointer is by 1 bytes, this is because bool datatype is of 1 bytes
   
}