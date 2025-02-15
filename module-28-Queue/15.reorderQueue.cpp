// given a queue, intermix the first half wiht the second halp using a single stack 

#include <iostream>
#include <queue>
#include <stack>
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

void reorder (queue<int>& q) {
    int n = q.size();
    stack<int> st;

    // storing first half in stack
    for (int i = 0; i<n/2; i++) {
        st.push(q.front());
        q.pop();
    }

    // pushing the stored first half back into q
    while (st.size() > 0) {
        q.push(st.top());
        st.pop();
    }

    // storing the second half (now first half) in stack
    for (int i = 0; i<n/2; i++) {
        st.push(q.front());
        q.pop();
    }

    // overlapping the first half and second half
    while (st.size() > 0) {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }

    // reversing the queue
    while (q.size() > 0) {
        st.push(q.front());
        q.pop();
    }
    while (st.size() > 0) {
        q.push(st.top());
        st.pop();
    }
}
int main () {
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.push(8);

    display(q);
    reorder(q);
    display(q);
}