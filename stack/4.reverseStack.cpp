// we can reverse the stack using a vector, but here we will use 2 extra stack to reverse
#include<iostream>
#include<stack>
using namespace std;

void print(stack<int> temp){
    // to pass the stack by reference use & 
    while(temp.size() != 0) {
        cout << temp.top() << " ";
        temp.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << "initial stack : " ;
    print(st);

    stack<int> temp1;
    while(st.size() != 0) {
        temp1.push(st.top());
        st.pop();
    }
    stack<int> temp2;
    while(temp1.size() != 0) {
        temp2.push(temp1.top());
        temp1.pop();
    }
    while(temp2.size() !=  0) {
        st.push(temp2.top());
        temp2.pop();
    }
    
    // printing stack
    cout << "final stack : " ;
    print(st);
}