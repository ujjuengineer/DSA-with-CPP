/*
    infix : val1 operator val2
    postfix : val1 val2 operator
*/


#include<iostream>
#include<string>
#include<stack>
using namespace std;

int priority (char ch) {
    if (ch == '+' || ch == '-') return 1;
    return 2;
}


int cal(int val1, int val2, char op) {
    if (op == '+') return val1 + val2;
    if (op == '-') return val1 - val2;
    if (op == '*') return val1 * val2;
    if (op == '/') return val1 / val2;
    return 0;
}

int main () {
    stack<string> num;
    stack<char> op;
    // string exp = "2+(6*4+9)/8-3";
    // string exp = "2+6*4/8-3";
    string exp = "(7+9)*4/8-3";

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
                    string ans = val1 + val2 + oper;
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
                    string ans = val1 + val2 + oper;
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
        string ans = val1 + val2 + oper;
        num.push (ans);
    }
    cout <<"infix : "<< num.top() << endl;

    // postfix evaluation 

    string postfix = num.top();
    stack<int> val;
    for (int i = 0; i<postfix.size(); i++) {
        if (postfix[i] >= 48 && postfix[i] <= 57) val.push(postfix[i]-'0');
        else {
            int val2 = val.top();
            val.pop();
            int val1 = val.top();
            val.pop();
            char ch = postfix[i];
            int ans = cal(val1,val2,ch);
            val.push(ans);
        }
    }
    cout <<"value of infix : "<< val.top() << endl;



    // postfix to infix conversion
    postfix = num.top();
    stack<string> infix;
    for (int i = 0; i<postfix.size(); i++) {

    }
}