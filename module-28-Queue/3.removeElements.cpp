// Remove all the elements present at even positions in queue. Consider 0-based indexing.

#include<iostream>
#include <queue>
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
    display(q);

    int n = q.size();
    while (n--) {
        if (n%2 != 0) q.push(q.front());
        q.pop();
    }
    display(q);
}