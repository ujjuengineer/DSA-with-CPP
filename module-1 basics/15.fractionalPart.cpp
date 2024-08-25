// print the fractional part of a number
// fractional part = number - gif

#include<iostream>
using namespace std;
int main(){
    float num ;
    cout<< "enter float number: ";
    cin>>num; // let input is -9.7
    int gif = (int)num; // we stored integer part of the float that is -9
    
    if(num<0){
        gif = gif-1; // -9-1=-10
    }
    cout<<"greatest integer function is : "<< gif<< endl;
    
    float fractional_part = num - gif ; // -9.7-(-10) => 10 - 9.7 = 0.3
    cout<<"fractioinal part of "<< num << " is " << fractional_part;

}