//sorting positive and negative
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-4);
    v.push_back(-9);
    v.push_back(7);
    v.push_back(-9);
    // v.push_back(0);
    v.push_back(1);
    v.push_back(-3);
    int n = v.size();
    
    int a = 0, b = v.size()-1;
    while(a<=b){
        if(v[a]<0) 
            a++;
        if(v[b]>0)
            b--;
        if(v[a]>0 && v[b]<0){
            swap(v[a], v[b]);
            a++, b--;
        }
    }

    for(int i=0; i<n; i++){
        cout<< v[i]<<" ";
    }
}