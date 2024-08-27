/*
you have given a matrix path, and you have to reach at the end of the matrix from starting. 
The thing is you can only move right or down to reach your destination. 
Now you have to find in how many ways you can reach your goal. 
*/

#include<iostream> 
using namespace std;


int main(){
    
    // before going there let us revise how to print spiral matrix
    // 1 2 3 4
    // 5 6 7 8
    // 9 10 11 12
    // we hve to print 1 2 3 4 6 5 9 2 7 4 3 4 3 5 3 8

    // to do so we will define minr, maxr, minc, maxc
    int n = 3, m= 4;
    // cout<< "enter row and col of the matrix ";
    // cin>> n >> m;
    // cout<< "enter elements of the matrix" << endl;

    int arr[3][4]={1,2,3,4,5,6,7,8,9, 10, 11, 12};
    // taking input of the elements
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m;j++){
    //         cin>> arr[i][j];
    //     }
    // }

    int minr = 0, minc = 0, maxr = n-1, maxc = m-1;
    while(minr<=maxr && minc<=maxc){

        // printing first row, minr = constant
        for(int i=minc; i<=maxc; i++){
            cout<< arr[minr][i]<<" ";
        }
        minr++;
        
        if(minc>maxc || minr>maxr) break;

        // printing cols, maxc constant
        for(int i=minr; i<=maxr; i++){
            cout<< arr[i][maxc]<<" ";
        }
        maxc--;
        
        if(minc>maxc || minr>maxr) break;
        // // printing maxr, maxr constant
        for(int i=maxc; i>=minc; i--){
            cout<< arr[maxr][i]<<" ";
        }
        maxr--;
        if(minc>maxc || minr>maxr) break;

        // // printing first col, minc constant
        for(int i=maxr; i>=minr; i--){
            cout<< arr[i][minc]<<" ";
        }
        minc++;
        if(minc>maxc || minr>maxr) break;

    }

    // for(int i=0; i<n; i++){
    //     for(int j=0; j<m;j++){
    //         cout<< arr[i][j]<<" ";
    //     }
    // }
    
}