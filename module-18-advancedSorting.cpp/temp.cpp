#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[] = {1,2,1,3,2,4,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n; i++){
        bool flag = 0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j] && i!=j){
                flag = 1;
            }
        }
        if(flag == 0){
            cout<< arr[i]<<" is our unique element";
            break;
        }
    }
}