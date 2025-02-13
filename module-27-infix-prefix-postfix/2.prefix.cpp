/*
    infix : val1 operator val2
    prefix : operator val1 val2
    postfix : val1 val2 operator
*/

/*
    infix to prefix conversion : 
        7*4 => * 7 4;
        7+9*3 => 7 + * 9 3 => + 7 * 9 3
*/

#include<iostream>
#include<string>
#include<stack>
using namespace std;

int priority (char ch) {
    if (ch == '+' || ch == '-') return 1;
    return 2;
}

int main () {
    stack<string> num;
    stack<char> op;
    string exp = "2+(6*4+9)/8-3";

    for (int i = 0; i<exp.size(); i++) {
        if (exp[i] >= '0' && exp[i] <= '9') {
            string temp = "";
            temp += exp[i];
            num.push (temp);
        }
        else {
            if (exp[i] == '(') op.push(exp[i]);
            else if (op.size() == 0 || op.top() == '(') op.push(exp[i]);
            else if (exp[i] == ')') {
                // kaam kro
                while (op.top() != '(') {
                    char oper = op.top();
                    op.pop();
                    string val2 = num.top();
                    num.pop();
                    string val1 = num.top();
                    num.pop();
                    string ans = oper + val1 + val2;
                    num.push (ans);
                }
                op.pop();
            } 
            else if (priority(exp[i]) > priority(op.top())) op.push(exp[i]);
            else {
                // kaam kro
                while (op.size() > 0 && op.top() != '(' && priority(op.top()) >= priority(exp[i])) {
                    char oper = op.top();
                    op.pop();
                    string val2 = num.top();
                    num.pop();
                    string val1 = num.top();
                    num.pop();
                    string ans = oper + val1 + val2;
                    num.push (ans);
                }
                op.push(exp[i]);
            }
        }
    }
    while (op.size() > 0 && op.top() != '(') {
        char oper = op.top();
        op.pop();
        string val2 = num.top();
        num.pop();
        string val1 = num.top();
        num.pop();
        string ans = oper + val1 + val2;
        num.push (ans);
    }
    cout << num.top() << endl;
}