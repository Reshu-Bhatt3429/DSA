#include <iostream>
#include <stack>
#include <string>
#include <algorithm>
using namespace std;

string prefixToInfix(string s) {
    stack<string> st;
    reverse(s.begin(), s.end()); // Process from end to start
    for (char c : s) {
        if (isalnum(c)) {
            st.push(string(1, c));
        } else {
            string a = st.top(); st.pop();
            string b = st.top(); st.pop();
            st.push("(" + a + c + b + ")");
        }
    }
    return st.top();
}

int main() {
    string expr;
    cout << "Enter Prefix Expression: ";
    cin >> expr;
    cout << "Infix: " << prefixToInfix(expr) << endl;
    return 0;
}