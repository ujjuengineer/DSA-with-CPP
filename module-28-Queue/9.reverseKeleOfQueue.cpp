// given a queue, reverse the first k elements of the queue

#include<iostream>
#include<queue>
using namespace std;

queue<int> modifyQueue(queue<int>& q, int k) {
    int s = q.size();
    stack<int> st;
    for (int i = 0; i<k; i++) {
        st.push(q.front());
        q.pop();
    }
    while (st.size()) {
        q.push(st.top());
        st.pop();
    }
    for (int i = k; i<s; i++) {
        q.push(q.front());
        q.pop();
    }
    return q;
}

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
    int arr[] = {1,2,3,4,5};
    int k = 3;
    int size = sizeof(arr)/sizeof(arr[0]);
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);

    display(q);

    modifyQueue(q,k);
    
    display(q);
}