#include<iostream>
using namespace std;
void fun(int* x, int* y){
    swap(*x,*y);
}
int main(){
    int x = 5;
    int y = 6;
    fun(&x, &y);
    cout<< x <<" "<<y<<endl;
}