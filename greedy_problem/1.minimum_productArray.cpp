// find the minimum product of subset of the given aray

#include<iostream>
#include<vector>
using namespace std;
/*
let we have any function f, that will reutrn the min product of the array 

*/
int helper(vector<int> v) {
    // base case
    if(v.size() == 1) return v[0];

    int temp = v[v.size()-1];
    v.pop_back();
    return min(temp*helper(v), helper(v));

}

int main() {
    int arr[] = {5, 3, 0, -3, -2};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> v(arr, arr+n);

    // counting nubmer of zero, -ve number and +ve number
    int cz = 0, cn = 0, cp = 0;
    cout << helper(v) << endl;
}


