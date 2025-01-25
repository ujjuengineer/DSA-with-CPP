// print the stack and also restoring its val in another stack
#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    stack<int> temp;
    while(st.size() > 0){
        temp.push(st.top());
        cout << st.top() << endl;
        st.pop();
    }

    while(temp.size() != 0){
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
    cout << st.top();
}