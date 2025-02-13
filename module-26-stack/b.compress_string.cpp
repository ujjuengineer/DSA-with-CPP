/*
given a string str, you have to compress it as follow
    str = aaabbaaabbcc => ababc
*/

#include<iostream>
using namespace std;

string compressString (string s) {
    stack<char> st;
    st.push(s[0]);
    for (int i = 1; i<s.size(); i++) {
        if(st.top() != s[i]) st.push(s[i]);
    }

    s = "";
    while (st.size()) {
        s += st.top();
        st.pop();
    }
    reverse (s.begin(), s.end());
    return s;
}

int main() {
    string str = "aaabbbccd";
    cout << compressString(str) << endl;
}