// array implementation of stack using oops

#include <iostream>
#include <vector>
using namespace std;
class Stack {
    public:
    vector<int> v; // no overflow condition

    // constructor
    Stack() {}

    void push (int val) {
        v.push_back(val);
    }

    void pop () {
        if (v.size() == 0) {
            cout << "Stack is Empty !" << endl;
            return;
        }
        v.pop_back();
    }

    int size () {
        cout << "the current size of the stack is : ";
        return v.size();
    }

    int top () {
        cout <<"the top element is : ";
        return v[v.size()-1];
    }

    void display () {
        cout << "elements of the stack are : ";
        for (int i = 0; i<v.size(); i++) {
            cout << v[i] << " ";
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