#include<iostream>
#include<vector>
using namespace std;
int maxSatisfaction(vector<int>& satisfaction) {
        int n = satisfaction.size();
        sort(satisfaction.begin(), satisfaction.end());
        for(int ele: satisfaction) cout<< ele<<" ";
        cout<< endl;

        // creating suffix sum
        int arr[n];
        arr[n-1] = satisfaction[n-1];
        for(int i = n-2; i>=0; i--){
            arr[i] = arr[i+1] + satisfaction[i];
        }
        for(int ele: arr) cout<< ele<<" ";
        cout<< endl;

        // finding pivot index
        int idx = -1;
        for(int i = 0; i<n; i++){
            if(arr[i]>=0){
                idx = i;
                break;
            }
        }
        if(idx == -1) return 0;

        // finding max sum
        int sum = 0, x = 1;
        for(int i = idx; i<n; i++){
            sum += satisfaction[i]*x;
            x++;
        }

        return sum;    
    }
int main(){
    int arr[]={-1,-8,0,5,-9};
    int n = sizeof(arr)/sizeof(arr[0]);

    vector<int> satisfaction(arr, arr+n);
    cout<< maxSatisfaction(satisfaction);
}