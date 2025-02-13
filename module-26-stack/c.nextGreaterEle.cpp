// given an array, find the next greater element for every index
// if there is no next greater element to the right of that index then put -1

// e.g., arr = 4 1 2 5 4 => 5, 2, 5, -1

/*
    IN GENERAL STACK KE QUESTIONS ME 3 STEP HOTE HAI
        POP 
        ANS
        PUSH
        and next greater ke liye reverse travel krna hai array me

        NEXT ME LAST SE START KRTE HAI, PREV ME FIRST SE START KARTE HAI 
*/

#include <iostream>
using namespace std;
int main () {
    
    int arr[] = {4,1,2,5,4,3,4,8,2,7}; // given array
    int s = sizeof(arr)/sizeof(arr[0]);

    stack<int> st;
    st.push(arr[s-1]);

    vector<int> brr(s,-1); // for storing next greater element
    brr[s-1] = -1; // last element ka koi next greater ele nhi hoga


    // finding next greater element 
    for (int i = s-2; i>=0; i--) {
        while (st.size()>0 && st.top() <= arr[i]) {
            st.pop();
        }
        if (st.size()>0) brr[i] = st.top();
        st.push(arr[i]);
    }

    for (int i = 0; i<s; i++) cout << brr[i] <<" ";
    cout << endl;
}