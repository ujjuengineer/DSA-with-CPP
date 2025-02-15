// array implementation of queue
// Remove all the elements present at even positions in queue. Consider 0-based indexing.

#include<iostream>
#include <queue>
using namespace std;

class Queue {
public: 
    int arr[5];
    int f; // front
    int b; // back

    Queue() {
        f = 0;
        b = 0;
    }

    void push(int val) {
        if (b-f == sizeof(arr)/sizeof(arr[0])) {
            cout << "Queue is FULL" << endl; return;
        }
        arr[b] = val;
        b++;
    }
    void pop() {
        if (b == 0) {
            cout <<"Queue is empty !" << endl; return;
        }
        f++;
    }
    int front() {
        if (b == 0) {
            cout <<"Queue is empty !" << endl; return -1;
        }

        return arr[f];
    }
    int back() {
        if (b == 0) {
            cout <<"Queue is empty !" << endl; return -1;
        }

        return arr[b-1];
    }
    int size() {
        return b-f;
    }
    bool empty() {
        if (b-f == 0) return true;
        else return false;
    }

    void display() {
        for (int i = f; i<b; i++) cout << arr[i] << " ";
        cout << endl;
    }
};


int main() {
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.display();
    
    q.push(60);
    cout <<"front is : "<< q.front() << endl;
    cout << "back is : " << q.back() << endl;
    cout << "size of the queue : " << q.size() << endl;

    q.pop();
    cout <<"front is : "<< q.front() << endl;
    cout << "back is : " << q.back() << endl;
}