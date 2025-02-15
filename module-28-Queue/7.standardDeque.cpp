#include<iostream>
#include<deque>
using namespace std;

void display(deque<int> de) {
    int s = de.size();
    while (s--) {
        cout << de.front()<<" ";
        int val = de.front();
        de.pop_front();
        de.push_back(val);
    }
}

int main() {
    /*
        commonly used methods : 
            push_back();
            push_front();
            pop_back();
            pop_front();

            fornt(); : give the front element
            back() : give the back element
            clear() : used to remove all the elements of the deque container

            empty() : return true or false
            size() : return the size of deque
    */
    deque<int> de;
    de.push_back(10);
    de.push_back(20);
    de.push_back(30);
    de.push_back(40);
    de.push_back(50);

    cout << de.size() << endl;

    display(de);
}