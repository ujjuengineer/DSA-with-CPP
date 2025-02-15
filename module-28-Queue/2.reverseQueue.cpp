// reverse the queue using stack

#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void display (queue<int>& q) {
    int n = q.size();
    while (n--) {
        int x = q.front();
        cout << q.front()<< " ";
        q.pop();
        q.push(x);
    }
    cout << endl;
}

int main() {
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << "original queue : " ;
    display(q);

    stack<int> st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    

    while (!st.empty()) {
        q.push(st.top());
        st.pop();
    }
    cout << "queue after reversing : ";
    display(q);
}