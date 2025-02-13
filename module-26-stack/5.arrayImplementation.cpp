// array implementation of stack using oops

#include <iostream>
using namespace std;
class Stack {
    public:
    int arr[5];
    int idx;

    // constructor
    Stack() {
        idx = -1;
    }

    void push (int val) {
        if (idx == sizeof(arr)/sizeof(arr[0])-1) {
            cout << "Stack is full ! " << endl;
            return;
        }
        idx++;
        arr[idx] = val;
    }

    void pop () {
        if (idx == -1) {
            cout << "Stack is Empty !" << endl;
            return;
        }
        idx--;
    }

    int size () {
        cout << "the current size of the stack is : ";
        return idx+1;
    }

    int top () {
        cout <<"the top element is : ";
        return arr[idx];
    }

    void display () {
        cout << "elements of the stack are : ";
        for (int i = 0; i<=idx; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main () {
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    cout << st.top() << endl;
    st.display();
    cout << st.size();
}