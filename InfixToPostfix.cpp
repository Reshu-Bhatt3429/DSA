#include <iostream>
#include <stack>
#include <string>
using namespace std;

string infixToPostfix(string s) {
    stack<char> st;
    string res;
    for (char c : s) {
        if (isalnum(c)) {
            res += c;
        } else if (c == '(') {
            st.push(c);
        } else if (c == ')') {
            while (!st.empty() && st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop(); // Remove '('
        } else {
            // Brute-force precedence checks
            while (!st.empty() && st.top() != '(') {
                if ((c == '+' || c == '-') && (st.top() == '+' || st.top() == '-' || st.top() == '*' || st.top() == '/' || st.top() == '^')) {
                    res += st.top();
                    st.pop();
                } else if ((c == '*' || c == '/') && (st.top() == '*' || st.top() == '/' || st.top() == '^')) {
                    res += st.top();
                    st.pop();
                } else if (c == '^' && st.top() == '^') {
                    res += st.top();
                    st.pop();
                } else {
                    break;
                }
            }
            st.push(c);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    return res;
}

int main() {
    string expr;
    cout << "Enter Infix Expression: ";
    cin >> expr;
    cout << "Postfix: " << infixToPostfix(expr) << endl;
    return 0;
}