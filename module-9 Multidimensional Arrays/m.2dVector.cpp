// 2-d vector is actually vector of vector
#include<iostream>
#include<vector>
using namespace std;
int main(){
    // just like we push integer in 1D vector, we push a vector in 2d vector
    vector<int> v1;
    v1.push_back(0);
    v1.push_back(1);
    v1.push_back(2);
    v1.push_back(3);

    vector<int> v2;
    v2.push_back(4);
    v2.push_back(5);

    vector<int> v3;
    v3.push_back(6);
    v3.push_back(7);
    v3.push_back(8);

    // now we will  make a 2d vector and push all the above vector in it
    vector< vector<int> > v;
    v.push_back(v1);
    v.push_back(v2);
    v.push_back(v3);
    // 0 1 2 3
    // 4 5
    // 6 7 8 , this is how our vector v is!
    
    // printing 2-d vector
    for(int i=0; i<v.size(); i++){
        for(int j=0; j<v[i].size(); j++){
            cout<< v[i][j]<<" ";
        }
        cout<< endl;
    }

    // v.size() gives number of row, v[i].size() give number of col in ith row
}