/*
what is infix statement ?
    the mathematical statement in the form of string are known as infix
    e.g., "6*2+65-89"
*/

// we will use stack to solve this problem

#include <iostream>
using namespace std;

int cal(int val1, int val2, char op) {
    if (op == '+') return val1 + val2;
    if (op == '-') return val1 - val2;
    if (op == '*') return val1 * val2;
    if (op == '/') return val1 / val2;
    return 0;
}

int priority (char ch) {
    if (ch == '+' || ch == '-') return 1;
    return 2;
}

int main() {
    string str = "2+(4*2+3)-6/4*3";
    stack <int> dig; // stack to store digits
    stack <char> op; // stack to store operator
    
    for (int i = 0; i<str.size(); i++) {
        if (str[i] >= 48 && str[i] <= 57) dig.push(str[i]-'0');
        else {
            if (op.size() == 0) op.push(str[i]);
            else if (str[i] == '(') op.push (str[i]);
            else if (op.top() == '(') op.push (str[i]);
            else if (str[i] == ')') {
                while (op.top() != '(') {
                    int val2 = dig.top();
                    dig.pop();
                    int val1 = dig.top();
                    dig.pop();
                    char oper = op.top();
                    op.pop();
                    int ans = cal(val1, val2, oper);
                    dig.push(ans);
                }
                op.pop();
            }
            else if (priority(str[i]) > priority(op.top())) op.push(str[i]);
            else {
                while (op.size() > 0 && op.top() != '(' && priority(op.top()) >= priority(str[i])) {
                    int val2 = dig.top();
                    dig.pop();
                    int val1 = dig.top();
                    dig.pop();
                    char oper = op.top();
                    op.pop();
                    int ans = cal(val1, val2, oper);
                    dig.push(ans);
                }
                op.push(str[i]); 
            }
        }
    }

    while (op.size() > 0) {
        int val2 = dig.top();
        dig.pop();
        int val1 = dig.top();
        dig.pop();
        char oper = op.top();
        op.pop();
        int ans = cal(val1, val2, oper);
        dig.push(ans);
    }
    cout << dig.top() << endl;
    cout << 2+(4*2+3)-6/4*3;
}

/*

    Issues in Your Code

    1️⃣ It Does Not Handle Multi-Digit Numbers Correctly 
    Your code assumes each digit is a separate number. However, 34 should be treated as one number, not two separate digits (3 and 4).
    Example:
    Expected: 3/34 → 0 (integer division).
    Actual: 3 and 4 are treated as separate numbers.
    🔹 Fix: Parse multi-digit numbers manually.
*/