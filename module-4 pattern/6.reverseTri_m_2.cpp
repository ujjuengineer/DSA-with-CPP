#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number of stars ";
    cin>>n;
    // if you notice the following pattern, // i+j = n+1, j=n+1-i
    // hence we can do num of stars in any row, number of col or star = n+1-row number
    // ****
    // ***
    // **
    // *
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n+1-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}