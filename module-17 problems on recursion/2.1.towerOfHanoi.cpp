// tower of hanoi
// objective of game : to move the n disk from source to destination in minimum possible moves

/*
    recursion breakdown : 
        to move n disk from source to destination, we must first move n-1 disk from source to helper, and then last disk from source to destination and then n-1 disk from helper to destination
*/

#include<iostream>
using namespace std;

int hanoi(int n, char s, char h, char d) {
    if(n==1) return 1;
    return hanoi(n-1,s,d,h) + hanoi(1,s,h,d) + hanoi(n-1,h,s,d);

}

int main() {
    cout << hanoi(3,'a','b','c');
}