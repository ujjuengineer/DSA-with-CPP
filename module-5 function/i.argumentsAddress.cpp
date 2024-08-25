// the address of passed arguments and passed input is different even though the name is same
// to print the address of x, we use &x
#include<iostream>
using namespace std;
void fun(int x, int y){
    // yaha pe humne fun function me diya hua x and y ka address print kra hai
    cout<<"adress of fun x is "<< &x <<endl;
    cout<<"adress of fun y is "<< &y <<endl;
}

int main(){
    int x = 3, y=2;
    // yaha pe humne main function me diya hua x and y ka address print kra hai
    cout<<"adress of main x is "<< &x <<endl;
    cout<<"adress of main y is "<< &y << endl;
    cout<<endl;
    fun(x,y);
// if you notice the fun and main function x,y have different address even though they have same name
}