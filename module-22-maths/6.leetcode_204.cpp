#include<iostream>
#include<vector>
using namespace std;

void markVec(vector<int>& vec) {
        int n = vec.size()-1; 
        // we did -1 because we had created the vec of size n+1

        for(int i = 2; i<=sqrt(n); i++) {
            for(int j = i*2; j<=n; j+=i) {
                vec[j] = 0;
            }
        }
    }

int countPrimes(int n) {
        vector<int> vec(n+1, 1); // 1 means prime num
        // index of vec indicates the number, ignore 0th index
        
        markVec(vec);
        int count = 0;
        for(int i = 2; i<=n; i++) {
            if(vec[i]==1) count++;
        }
        return count;
    }
int main(){
    int n;
    cout <<"enter n: ";
    cin >> n;
    cout <<"number of prime less than "<< n <<" is "<< countPrimes(n) << endl;
}