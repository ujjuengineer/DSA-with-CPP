#include <iostream>
#include <vector>
using namespace std;

int largestRectangleArea(vector<int>& heights) {
        
    int s = heights.size();

    // finding prev smaller or equal element index
    vector<int> psi(s,-1);

    stack<int> st;
    st.push(0);
    for (int i = 1; i<s; i++) {
        while (st.size()>0 && heights[i] < heights[st.top()]) st.pop();
        if (st.size()) psi[i] = st.top();
        st.push(i);
    }

    // finding next smaller or equal element index
    vector<int> nsi(s,-1);

    stack<int>().swap(st); // cleared the stack
    st.push(s-1);
    for (int i = s-2; i>=0; i--) {
        while (st.size()>0 && heights[i] < heights[st.top()]) st.pop();
        if (st.size()) nsi[i] = st.top();
        st.push(i);
    }


    cout << "next smaller element indices are : ";
    for (int i = 0; i<s; i++) cout << nsi[i] <<" ";
    cout << endl;
    cout << "prev smaller element indices are : ";
    for (int i = 0; i<s; i++) cout << psi[i] <<" ";
    cout << endl;

    int maxArea = INT_MIN;

    for (int i = 0; i<s; i++) {
        int leftSpan = i, rightSpan = s-i-1;
        if (psi[i] != -1) {
            if (psi[i]<heights[i])
                leftSpan = i - psi[i] -1;
            else leftSpan = i - psi[i];
        }
        if (nsi[i] != -1) {
            if (nsi[i] < heights[i])
                rightSpan = nsi[i] - i -1;
            else rightSpan = nsi[i] - i;
        }
        int totalSpan = leftSpan + rightSpan + 1;
        int area = totalSpan * heights[i];
        maxArea = max(maxArea, area);
    }

    cout << "max area is : " ;
    return maxArea;
}

int main () {
    int arr[] = {2,1,5,6,2,3};
    // int arr[] = {1,1};
    // int arr[] = {0,2,0};
    int s = sizeof(arr)/sizeof(arr[0]);
    vector<int> heights(arr, arr+s);
    cout << largestRectangleArea(heights);
}