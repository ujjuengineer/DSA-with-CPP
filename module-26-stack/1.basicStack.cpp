#include<iostream>
#include<stack>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);

    /*
    basic operation on stack
        st.push(val);
        st.pop();
        st.top();
    */

    cout <<"size of the stack is : "<< st.size() << endl; // 4
    // printing stack
    while(st.size() > 0){
        cout << st.top() << endl; // print the top ele of the stack 
        st.pop();
    }
    cout <<"size of the stack is : "<< st.size() << endl;
}