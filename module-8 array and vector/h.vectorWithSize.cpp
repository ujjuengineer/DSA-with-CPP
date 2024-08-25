#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(5); // it means 5 size ka ek array ban gya and sare dabbe me 0 as an element default value dal jata hai
    cout<<v.size()<<endl<<v.capacity() << endl;
    // lets print the element
    for(int i=0; i<5; i++){
        cout<< v[i] << ','; // 0,0,0,0,0
    }
cout<<endl;
    vector<int> v2(5,7); // this created a vector of size 5 and each element have default value = 7;
    for(int i=0; i<5; i++){
        cout<< v2[i] << ' '; // 7 7 7 7 7 
    }
    cout<<"\n\n";
// printing a vector if we its size is unknown
    vector<int> vec;
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(7);
    vec.push_back(65);
    vec.push_back(7);
    vec.push_back(65);
    vec.push_back(4);
    vec.push_back(65);
    vec.push_back(4);
    

    for(int i=0; i< vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<< endl<<endl;
    for(int i=0; i<vec.capacity(); i++){
        cout<< vec[i]<<" ";
    }
}