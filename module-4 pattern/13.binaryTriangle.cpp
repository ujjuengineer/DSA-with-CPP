#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    for(int i =1; i<=n; i++){
        for(int j=1; j<=i; j++){
            if((i+j)%2==0){
                cout<<"1 ";
            }
            else cout<<"0 ";
        }
        cout<<endl;
    }
    /*
    another condition could be: 
        if((i%2==0 && j%2==0) || (i%2!=0 && j%2!=0)) cout<<"1 ";
        else cout<<"0 ";
    */
}