// we can print array using loop
#include <iostream>
using namespace std;
int main(){
    int arr[4]={1,2,3,4};
    for(int i=0; i<=3; i++){
        cout<< arr[i]<<" ";
    }
cout<<endl<<endl;

// we can take input from user using loop
    int arr2[5];
    cout<<"enter 5 elements of second array: ";
    for(int i=0; i<=4; i++){
        cin>>arr2[i];
    }
    // printing
    for(int i=0; i<=4; i++){
        cout<<arr2[i]<<' ';
    }
}