#include<iostream>
using namespace std;
int main(){
    /*  factors of 30 are : 1,2,3,5,6,10,15,30 
        if you notice 1 and 30 are connected, 2 and 15 are connected, 3 and 10 are connected as follows : 
        15 = 30/2, 10 = 10/3, 6 = 30/5, for printing factors we can print all the factors in O(sqrt(n)) time complexity
    */

    int n;
    printf("enter n: ");
    scanf("%d",&n);

    // printing the factors existing before sqrt
    for(int i = 0; i<sqrt(n); i++) { 
        if(n % i == 0) cout << i <<" ";
    }
    // priting the factors existing after sqrt
    for(int i = sqrt(n); i>=1; i--) {
        if(n%i == 0) cout << n/i <<" ";
    }
}