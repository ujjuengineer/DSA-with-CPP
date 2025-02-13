// given an array of stock, you have to find "aaj ka stock, pichle kitne din ka highes stock hai"
// e.g., arr = 100 80 60 81 70 60 75 85
//       ans =  1  1  1  3  1  1  3  7 

#include <iostream>
using namespace std;
int main () {
    int arr [] = {10, 100, 80, 60, 81, 70, 60, 75, 85};
    int s = sizeof(arr)/sizeof(arr[0]);

    /*
        find and store the index of the prev greater elements
        then subtract the index of prev greater element from the current index, if there is no prev greater element then push -1 at that place
    */
    stack <int> st;
    st.push(0);

    vector<int> brr(s,-1); // this will store the index of prev greater element

    // finding prev greater index
    for (int i = 1; i<s; i++) {
        while (st.size() > 0 && arr[st.top()] <= arr[i]) st.pop();
        if (st.size()) brr[i] = st.top();
        st.push(i);
    }

    cout << "prev greater index array is : ";
    for (int i = 0; i<s; i++) cout << brr[i] <<" ";
    cout << endl;

    // finding span of the stock 
    for (int i = 0; i<s; i++) brr[i] = i - brr[i];
    
    cout <<"span of the stock is : ";
    for (int i = 0; i<s; i++) cout << brr[i] <<" ";
    cout << endl;
}