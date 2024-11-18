// some property of substring

#include<iostream>
using namespace std;
int main(){
    string str = "abcdef";

    // we have index and size of the string, then we can extract left and right side of that index using substring property

    // let we have to remove index 2 element i.e., c, so what we can do is we will create a substring of left side and a substring of right side & then add both substring

    int index = 2;
    string left = str.substr(0,index);//this will give substring of left side of idx
    // substr(0,2) means substring of length 2 from index 0
    // substr(2) means substring from index 2 to end, including index 2 element
    
    string right = str.substr(index+1); 

    string ans = left + right; 
    cout<< ans<<endl;
}