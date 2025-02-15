/* follow first in first out principal (FIFO), 
    Stack follows (LIFO)
    in stack : ek back se pop and push hota hai, 
    but in queue : front se pop and back se push hota hai

*/
#include <iostream>
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

void reverseDisplay (queue<int>& q) {
    // using stack
}
int main () {
    queue<int> q;

    /*
        push : add element at back
        pop : remove element from front
        front : access element from front
        size : give the size of the queue
        empty : give true if queue is empty else false
        back : access element from back (special feature in cpp)
    */

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    // display queue 
    display(q);

    reverseDisplay(q);


    cout << q.front() << " "<< q.back() << endl; // front : 10, back : 50
    q.pop();
    cout << q.front() << endl; // front : 20, back : 50
    cout << q.empty() << endl;
    cout << q.size() << endl;

}