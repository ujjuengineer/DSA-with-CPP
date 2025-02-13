// we can print the stack in state order as well

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
        st.pop();
    }

    while(temp.size() != 0){
        cout << temp.top() << endl;
        st.push(temp.top());
        temp.pop();
    }
    cout << endl;
    cout << st.top();
}