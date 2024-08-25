// module 2 video no. 13
#include<iostream>
using namespace std;
int main(){
    int x;
    x = 5 > 8 ? 10 : 1 != 2 < 5 ? 20 : 30;
    // here we have to use hiarchy,
    // 5>8 false so "1 != 2 < 5 ? 20 : 30" will run
    // now 1 != 2 < 5 --> hiarchy of > is more than != so 2<5 will be calculated
    // 2<5 true i.e. 1 and 1!=1 is false so 30 will run
   
    // remember the hiarchy () [] ++ -- , * / %, + - , > >=, < <= , == != , &&, ||, 
    // ?:, = += -= *= 
// bracket > incriment decriment > arthmatic > comprision(relational) > logical > assingment
   
    cout<<"value of x : "<<x;
}