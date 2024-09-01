// finding all permutations of an string given all elements of the string are unique
// e.g., abc -> abc, acb, bac, bca, cab, cba

/*
-> we will make number of call = length of the string, as the length decreases, the number of call for recursion decreases. 
-> at every call we will extract left and right side of the index and add them and send for the next call */


// permutation me sare possible pattern print hoga, whereas combination me sirf unique combination hi print hoega
// for example in permutation, 1,2,3 and 1,3,2 are 2 different species, whereas in combination, permutation 1,2,3 and 1,3,2 both are same


#include<iostream>
using namespace std;

void permutation(string original, string resultant){
    // base case
    if(original==""){
        cout<< resultant<< endl;
        return;
    }
    for(int i=0; i<original.size(); i++){
        char ch = original[i];
        string left = original.substr(0,i);
        string right = original.substr(i+1);
        
        string newOriginal = left+right;
        string newResultant = resultant + ch;
        
        permutation(newOriginal, newResultant);
        // permutation(left+right, resultant + ch);
    }
}

int main(){
    string str = "abc";
    permutation(str,"");
}