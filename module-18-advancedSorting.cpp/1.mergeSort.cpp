// mergersort is stable sort


/* time complexity of bubble, selection, insertion sort is O(n square)
    where as the time complexity of inbuilt sort is O(n log n)
    
    The time complexity of the merge sort is also O(n log n) 
    also the time complexity of quick sort is O(n log n)*/


// merge sort algo 
#include<iostream> 
#include<vector>
using namespace std;

// function for mergin 2 vectors
void merge(vector<int>& v1, vector<int>& v2, vector<int>& v){
    int i=0, j=0, k=0;
    while(i<v1.size() && j<v2.size()){
        if(v1[i]<=v2[j]){
            v[k++]=v1[i++]; // this will first use the current i and j and then i++ , j++
        }
        else{
            v[k++]=v2[j++];
        }
    }

    while(i<v1.size()){
        v[k++]=v1[i++];
    }
    while(j<v2.size()){
        v[k++]=v2[j++];
    }
}


void helper( vector<int>& v ){
    int n = v.size();
    // base case
    if(n==1){
        return;
    }
    //creating 2 vectors for filling n/2 elements
    int n1 = n/2, n2 =n-(n/2);
    vector<int> v1(n1), v2(n2);

    

    for(int i=0; i<n1; i++){
        v1[i]=v[i];
    }
    for(int j=0; j<n2; j++){
        v2[j]=v[j+n1];
    }

    helper(v1);
    helper(v2);
    merge(v1,v2,v);

    v1.clear(); // this will clear our v1 and v2 vector
    v2.clear();
}

int main(){
    int arr[]={5,1,3,0,4,9,6};
    // int arr[]={5,1,8,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    // we can directly fill the value of array into a vector
    vector<int> v(arr, arr+n);

    helper(v);

    for(int ele: v){
        cout<< ele<<" ";
    }
}