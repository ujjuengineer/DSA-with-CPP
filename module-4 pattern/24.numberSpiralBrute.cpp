/*   

for n = 3

3 3 3 3 3 
    
    +

3       2 2 2     3  
3 2  +  1    +    2 3
3       2 2 2     3 

    +
3 3 3 3 3 



*/





#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number: ";
    cin>> n;
    int m = n + (n-1);

    // printing first line
    for(int i=1; i<=m; i++){
        cout<< n<<" ";
    }
    cout<< endl;

    int col = 1;
    int col2 = m-2;
    int col3 = 1;

    // loop for number of line
    for(int i=1; i<=m-2; i++){ // m-2 iss liye kuiki first and last line humlog loop k bahar print krenge
        
        // loop for first part
        int a = n;
        for(int j=1; j<=col; j++){
            cout<< a<<" ";
            a--;
        }
        if(i<m/2) col++;
        else col--;

        // loop for second part
        for(int j=1; j<=col2; j++){
            cout<< a<<" ";
        }
        if(i<m/2)col2 -=2;
        else col2 += 2;

        // loop for 3rd part
        int b = a+1;
        for(int j=1; j<=col3; j++){
            cout<< b<<" ";
            b++;
        }
        if(i<m/2) col3++;
        else col3--;
        
        cout<< endl;
    }

    // printing last line
    for(int i=1; i<=m; i++){
        cout<< n<<" ";
    }
    
}
    
