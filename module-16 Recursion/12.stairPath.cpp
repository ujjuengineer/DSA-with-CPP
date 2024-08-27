// a person can climp either 1 step or 2 steps at a time. in how many ways he can climp n stairs

/*
at ever stage he have 2 option, either he can go 1 step or he can go 2 step */

#include<iostream> 
using namespace std;

int ways(int n){
    
    // base case
    if(n==1)
        // then he can climb in only 1 ways 
        return 1;    
    if(n==2)
        // then he can climb in 2 ways, either he would took 2 steps or he would took 1+1 step
        return 2;

    // if he took 1 step, then stairs decreases by 1 and if he took 2 steps then stairs decreses by 2
    // so total number of ways for n stairs = total number of ways if he took 1 stair + total number of ways if he took 2 stairs
    int number_of_ways = ways(n-1) + ways(n-2);
    return number_of_ways;
    
}

int main(){
    int stairs;
    cout<<"enter number of stairs: ";
    cin>> stairs;
    cout<<"number of ways : "<< ways(stairs);

}