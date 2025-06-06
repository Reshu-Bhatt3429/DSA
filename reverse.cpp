#include <iostream>
#include <stack>
using namespace std;

void insertAtBottom(stack<int>& s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insertAtBottom(s, x);
    s.push(temp);
}

void reverseStack(stack<int>& s) {
    if (!s.empty()) {
        int x = s.top();
        s.pop();
        reverseStack(s);
        insertAtBottom(s, x);
    }
}

int main() {
    stack<int> s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reverseStack(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}