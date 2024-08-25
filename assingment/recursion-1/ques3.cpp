// calculate the number of ways in which a person can climb n stairs if he can take exactly 1,2 or 3 steps at each level

#include<iostream>
using namespace std;

int fun(int n,int &step){
   
    if(n==1)return 1;
    else if(n==0)return 1;
    else if(n<0) return 0;
    step = fun(n-1, step) + fun(n-2, step) + fun(n-3, step);
    return step;

}

int main(){

    int n = 3;
    int step = 0;
    cout<< fun(n,step);

    
}