#include<iostream>
using namespace std;

class node {
    public:
    int val;
    node* next;

    node(int val) {
        this->val = val;
        this->next = NULL;
    }
};

class Stack {
    public:
    node* head;
    int size;

    Stack() {
        head = NULL;
        size = 0;
    }

    void push (int val) {
        node* temp = new node(val);
        temp->next = head;
        head = temp;
        size++;
    }

    void pop () {
        if (head == NULL) {
            cout << "Stack is empty !" << endl;
            return;
        }
        head = head->next;
        size--;
    }

    int top () {
        if (head == NULL) {
            cout << "Stack is empty !"<< endl;
            return -1;
        }
        return head->val;
    }

    void recrDis (node* head) {
        if (head == NULL) return;
        recrDis (head->next);
        cout << head->val <<" ";
    }

    void display () {
        // nested function is not allowed in cpp
        node* temp = head;
        // to display the stack in straight order, we will use recursion
        // void recrDis (node* head) {
        //     if (head == NULL) return;
        //     recrDis (head->next);
        //     cout << head->val <<" ";
        // }
        recrDis(temp);
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
    cout << st.size;
}