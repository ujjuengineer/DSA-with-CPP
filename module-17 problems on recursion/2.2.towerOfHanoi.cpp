// print the path of the disks moving from one rod to another rods

#include<iostream>
using namespace std;

void hanoi(int n, char s, char h, char d){
    // base case
    if(n==0) return;

    hanoi(n-1, s, d, h);
    cout<< s << " -> "<< d<< endl;
    hanoi(n-1, h, s, d);
}

int main(){
    // objective is n-1 disk ko 2nd rod pr lao, and then nth disk lo 3rd rod pr lao, and finally n-1 disk lo 3rd rod pr lao
    int n = 4;
    hanoi(n, 'a', 'b', 'c');
}