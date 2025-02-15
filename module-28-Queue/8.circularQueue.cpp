#include<iostream>
#include<vector>
#include<stack>
using namespace std;

class MyCircularQueue {
    public:
        vector<int> arr;
        int f; // front
        int b; // back
        int s; // current size
        int c; // capacity
    
        // constructor
        MyCircularQueue(int k) {
            f = 0;
            b = 0;
            s = 0;
            c = k;
            vector<int> t(k);
            arr.swap(t);
        }
        
        // Inserts an element into the circular queue.
        bool enQueue(int val) {
            if(s==c) return false;
            if(b==c && s<c) b = 0;
            arr[b] = val;
            b++;
            s++;
            return true;
        }
        
        bool deQueue() {
            if(s==0) return false;
            f++;
            if(f==c) f = 0;
            s--;
            return true;
        }
        
        int Front() {
            if (s == 0) return -1;
            return arr[f];
        }
        
        int Rear() {
            if (s==0) return -1;
            return arr[b-1];
        }
        
        bool isEmpty() {
            if (s==0) return true;
            return false;
        }
        
        bool isFull() {
            if (s==c) return true;
            return false;
        }
};

int main() {
    MyCircularQueue q(2);
    q.enQueue(2);
    q.enQueue(3);
    q.deQueue();
    q.enQueue(4);

    q.deQueue();
    q.enQueue(5);
    cout << q.Front()<< endl;
    cout << q.Rear()<< endl;
}