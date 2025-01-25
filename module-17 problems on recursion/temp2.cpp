#include <iostream>
#include<vector>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    vector<int> original(n);
	    for(int i = 0; i<n; i++){
	        int temp;
	        cin >> temp;
	        original[i] = temp;
	    }
	    
	    vector< vector<int> > lwda(n,vector<int>(2));
	    for(int i = 0; i<n; i++){
	        for(int j = 0; j<2; j++){
	            if(j==1) lwda[i][j] = i+1;
	            else lwda[i][j] = original[i];
	        }
	    }
	    
	    // sorting according to 1st col 
	    for(int i = 0; i<n-1; i++){
	        for(int j = 0; j<n-i-1; j++){
	            if(lwda[i][0] > lwda[i+1][0]){
	                swap(lwda[i][0], lwda[i+1][0]);
	                swap(lwda[i][1], lwda[i+1][1]);
	            }
	        }
	    }
	    
	    // calculating penalty
	    int penalty = 0;
	    for(int i = 0; i<n-1; i++){
	        if(lwda[i][0]==lwda[i+1][0]) continue;
	        else {
	            penalty += lwda[i][1];
	        }
	    }
	    penalty += lwda[n-1][1];
	    cout << penalty << endl;
	}

}