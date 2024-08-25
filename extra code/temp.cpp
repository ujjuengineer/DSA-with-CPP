#include<iostream>
#include<vector>
using namespace std;
int fact(int n){
    int fac = 1;
    for(int i=1; i<=n; i++){
        fac = fac*i;
    }
    return fac;
}
int combination(int n, int r){
    int nfact = fact(n);
    int rfact = fact(r);
    int nrfact = fact(n-r);
    return nfact / (rfact*nrfact);
}
int main(){
    int n;
    cin>>n;
    for(int i=0; i<=n; i++){
        for(int j=0; j<=i; j++){
            cout<< combination(i,j)<< " ";
        }
        cout<<endl;
    }
}