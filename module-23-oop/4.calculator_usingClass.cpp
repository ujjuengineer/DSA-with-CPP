#include<iostream>
using namespace std;

class calculator {
    public:
    
    int a;
    int b;

    void sum() {
        cout << a + b << endl;
    }
    void diff() {
        cout << a - b << endl;
    }
};

int main() {

    // created an object calci
    calculator calci;

    calci.a = 6;
    calci.b = 9;

    calci.sum();
    calci.diff();
}