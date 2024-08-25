// WAP to print the matrix in spiral form
// leetcode-54
#include<iostream>
using namespace std;
int main(){
// 1 2 3 4 5
// 6 7 8 9 0   we have to print it as 1 2 3 4 5 0 6 7 7 3 5 9 3 
// 3 5 6 4 6                                6 7 8 9 4 6 5...
// 9 5 3 7 7
    int m,n;
    cout<<"enter the row and col of the matrix: ";
    cin>>m>>n; 
    int matrix[m][n];
    cout<<"enter the element of the matrix: ";
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
        }
    }

    int minrow = 0, mincol = 0;
    int maxrow = m-1, maxcol = n-1;
    while(minrow<=maxrow && mincol<=maxcol){
        // pehle right move krenge, minrow constant, mincol se maxcol print krna hai
        for(int i=mincol; i<=maxcol; i++){
            cout<< matrix[minrow][i]<<" ";
        }
        minrow++;
        if(mincol>maxcol || minrow>maxrow) break;

        // now niche jaaeng, maxcol constant rhega, minrow se maxrow print hoga
        for(int i=minrow; i<=maxrow; i++){
            cout<< matrix[i][maxcol]<<" ";
        }
        maxcol--;
        if(mincol>maxcol || minrow>maxrow) break;

        // now moving left, maxrow constant rhega, maxcol se mincol print hoga
        for(int i=maxcol; i>=mincol; i--){
            cout<< matrix[maxrow][i]<<" ";
        }
        maxrow--;
        if(mincol>maxcol || minrow>maxrow) break;

        // now moving up, mincol constant rhega, maxrow se minrow print hoga
        for(int i=maxrow; i>=minrow; i--){
            cout<<matrix[i][mincol]<<" ";
        }
        mincol++;
    }
}