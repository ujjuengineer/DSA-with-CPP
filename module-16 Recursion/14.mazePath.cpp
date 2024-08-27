/*
you have given a matrix path, and you have to reach at the end of the matrix from starting. 
The thing is you can only move right or down to reach your destination. 
Now you have to find in how many ways you can reach your goal. 
*/

#include<iostream>
using namespace std;

int call(int minr, int maxr, int minc, int maxc){
    // base case
    if(minr==maxr || minc==maxc) return 1;

    int ways = call(minr+1, maxr, minc, maxc) + call(minr, maxr, minc+1, maxc);
    return ways;
}

int main(){
    int m,n;
    cout<< "enter row: ";
    cin>> n;
    cout<< "enter col: ";
    cin>> m;

    int minr = 0, maxr = n-1, minc = 0, maxc = m-1;
    cout<<"total number of ways to reach destination is: "<< call(minr, maxr, minc, maxc) << endl;
}