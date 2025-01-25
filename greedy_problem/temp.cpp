#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<string> subset;

void helper(string original, string ans, int idx) {
    if(idx == original.size()) {
        if(!ans.empty()) subset.push_back(ans);
        return;
    }
    
    helper(original, ans, idx+1);
    helper(original, ans+original[idx], idx+1);
}


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int t;
    cin >> t;
    while(t != 0) {
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i<n; i++) cin >> arr[i];
        
        string str;
        
        for(int i = 0; i<n; i++) {
            str += to_string(arr[i]);
        }
        subset.clear();
        helper(str, "", 0);

        for(int i = 0; i<subset.size(); i++) {
            string temp = subset[i];
            int num = stoi(temp);
            cout << num << endl;
        }
        // int maxSize = 0;
    
        
        // for(int i = 0; i<subset.size(); i++) {
        //     string tempStr = subset[i];
        //     if(tempStr[0]=='0' && tempStr.size() > 1) continue;
        //     int temp = stoi(tempStr);
        //     if(temp % 3 == 0 || temp % 5 == 0) {
        //         maxSize = max(maxSize, (int)subset[i].size());
        //     }
        // }
        
        // cout << maxSize << endl;
        
        t--;
    }
    return 0;
}
