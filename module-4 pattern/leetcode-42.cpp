// trapping rain water, leetcode-42
#include<iostream>
#include<vector>
using namespace std;

void print(vector<int>& vector){
    for(int i=0; i<vector.size(); i++){
        cout<< vector[i]<<" ";
    }
    cout<< endl;
}

void trap(vector<int>& height) {

    int n = height.size();

    vector<int> prevgre;
    int max = 0;
    for(int i=0; i<n; i++){
        
        prevgre.push_back(max);
        if(height[i]>max) max = height[i];
    }

    vector<int> aftergre;
    max = 0;
    for(int i=n-1; i>=0; i--){
        aftergre.push_back(max);
        if(height[i]>max) max = height[i];
    }
    reverse(aftergre.begin(), aftergre.end());

    // finding min of prev and after greater and filling it in aftergre vector to save space
    for(int i=0; i<n; i++){
        int mini = min(prevgre[i],aftergre[i]);
        aftergre[i]=mini;
    }  

    // finding water contained
    int water = 0;
    for(int i=0; i<n; i++){
        if(height[i]<aftergre[i]) water = water + (aftergre[i]-height[i]);
    } 

    print(prevgre);
    print(aftergre);
    cout<<"water stored : "<< water<< endl;
}


int main(){
    vector<int> height;
    height.push_back(0);
    height.push_back(1);
    height.push_back(0);
    height.push_back(2);
    height.push_back(1);
    height.push_back(0);
    height.push_back(1);
    height.push_back(3);
    height.push_back(2);
    height.push_back(1);
    height.push_back(2);
    height.push_back(1);
    
    trap(height);

        
}