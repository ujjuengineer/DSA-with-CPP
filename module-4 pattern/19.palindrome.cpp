#include<iostream>
using namespace std;
int main(){
    int n = 5;
    // palindrome
    //            1
    //          1 2 1
    //        1 2 3 2 1
    //      1 2 3 4 3 2 1

    /*
            for n = 5

               * * * * 1            * * * *     1               *
               * * * 1 2 1    ==>   * * *   +   1 2          +  1
               * * 1 2 3 2 1        * *         1 2 3           2 1
               * 1 2 3 4 3 2 1      *           1 2 3 4         3 2 1
               1 2 3 4 5 4 3 2 1                1 2 3 4 5       4 3 2 1 

                
                where * == space
    */


    for(int i=1; i<=n; i++){
        for(int j=n-i; j>0; j--){
            cout<<"  ";
        }
        for(int k=1; k<=i; k++){
            cout<< k <<" ";
        }
        for(int l=i-1; l>0; l--){
            cout<< l << " ";
        }
        cout<< endl;
    }
}