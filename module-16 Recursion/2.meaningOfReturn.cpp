// return means kathm tata bye bye, return k niche kuch v rhega to consider nhi hoga
#include<iostream>
using namespace std;
void gun(){
    return; // katham
    cout<< "hello ujju";
}
void fun(){
    cout<<"hello ujjwal";
    gun();
    return;
}

int main(){
    
   fun();
   // wonder why hello ujju will not printed
}