#include <iostream>
#include <stack>
#include <string>
using namespace std;

string postfixToPrefix(string s) {
    stack<string> st;
    for (char c : s) {
        if (isalnum(c)) {
            st.push(string(1, c));
        } else {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            st.push(c + b + a); // Operator + operand1 + operand2
        }
    }
    return st.top();
}

int main() {
    string expr;
    cout << "Enter Postfix Expression: ";
    cin >> expr;
    cout << "Prefix: " << postfixToPrefix(expr) << endl;
    return 0;
}