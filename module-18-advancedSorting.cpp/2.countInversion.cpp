#include<iostream>
#include<vector>
using namespace std;

int c = 0;
int helper2(vector<int>& a, vector<int>& b){
    int i = 0, j = 0;
    int count = 0;
    while(i<a.size() && j<b.size()){
        if(a[i]>b[j]){
            count += (a.size()-i);
            j++;
        }
        else i++;
        
    }
    return count;
}

void merge(vector<int>& a, vector<int>& b, vector<int>& v){
    int i=0, j=0, k=0;
    while(i<a.size() && j<b.size()){
        if(a[i]<=b[j]){
            v[k++] = a[i++];
        }
        else v[k++] = b[j++];
    }

    while (i<a.size())
    {
        v[k++]=a[i++];
    }
    while (j<b.size())
    {
        v[k++]=b[j++];
    }
    
    
}

void helper(vector<int>& v){
    int n = v.size();
    if(n==1) return;

    int s1 = n/2, s2 = n - (n/2);
    vector<int> a(s1), b(s2);

    for(int i=0; i<s1; i++){
        a[i]=v[i];
    }
    for(int i=0; i<s2; i++){
        b[i]=v[i+s1];
    }

    
    helper(a);
    helper(b);

    c = c + helper2(a,b);

    merge(a,b,v);

    return;

    // a.clear();
    // b.clear();
}

int main(){
    int arr[]={5,1,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> v(arr, arr+n);

    helper(v);
    cout<< endl<< c<<endl;
    // for(int ele: v){
    //     cout<< ele<<" ";
    // }

}