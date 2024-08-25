// we can even print the all possible path ddrr/ drdr like this
#include<iostream>
using namespace std;

void maze(int sr, int sc, int er, int ec, string s){
    // base case
    if(sr>er || sc>ec) return;
    if(sr==er && sc==ec) cout<< s << endl;

    maze(sr,sc+1,er,ec,s+'R'); // call for left
    maze(sr+1, sc, er,ec, s+'D');
}
int main(){
    maze(1,1,3,3,""); // we passed an empty string so that we can store the ways
}
