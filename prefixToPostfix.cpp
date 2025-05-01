#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string prefixToPostfix(string s) {
    stack<string> st;
    reverse(s.begin(), s.end());
    for (char c : s) {
        if (isalnum(c)) {
            st.push(string(1, c));
        } else {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            st.push(a + b + c);
        }
    }
    return st.top();
}

int main() {
    string expr;
    cout << "Enter Prefix Expression: ";
    cin >> expr;
    cout << "Postfix: " << prefixToPostfix(expr) << endl;
    return 0;
}