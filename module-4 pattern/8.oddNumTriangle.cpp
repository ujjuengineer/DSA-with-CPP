// again we can solve this by various meathod, this is using extra variable
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter number ";
    cin>>n;
    for(int i =1; i<=n; i++){
        int a = 1;
        for(int j=1; j<=i; j++){
            cout<<a<<" ";
            a += 2;
        }
        cout<<endl;
    }
}