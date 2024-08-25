// given a string consisting of lowercase english alphabets. print the character that is occurring most number of times.

//Meathod1: brut force meathod

#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"enter string: ";
    cin>>s;
    int n= s.size();

    sort(s.begin(), s.end());
    cout<< s << endl;
    

    // finding maxi
    int count = 1, maxi = INT_MIN;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            if(count>maxi) maxi = count;
            count = 1;
        }
    }
    cout<< maxi<< endl;

    // printing maxi
    count = 1;
    for(int i=1; i<n; i++){
        if(s[i]==s[i-1]){
            count++;
        }
        else{
            if(count==maxi) cout<< s[i-1]<<"->"<< maxi << endl;
            count = 1;
        }
    }
}