// M-1
#include<iostream>
using namespace std;

int maze(int sr, int sc, int er, int ec){
    // base case
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc == ec) return 1;
    
    // at every point we have 2 option either to go right or go down, and final answer is sum of all the possible way if we go right and down
    int rightways = maze(sr, sc+1, er, ec);
    int downways = maze(sr+1, sc, er, ec);
    
    int totalways = rightways + downways;
    return totalways;
}
int main(){
    // m-1 is to pass starting and ending cell to the function
    cout<< maze(1,1,3,3) << endl; 
    // finish point is cell number(3,3) and starting point is (0,0)
}