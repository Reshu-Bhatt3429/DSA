#include <iostream>
#include <stack>
using namespace std;

void insertSorted(stack<int>& s, int x) {
    if (s.empty() || s.top() <= x) {
        s.push(x);
        return;
    }
    int temp = s.top();
    s.pop();
    insertSorted(s, x);
    s.push(temp);
}

void sortStack(stack<int>& s) {
    if (!s.empty()) {
        int x = s.top();
        s.pop();
        sortStack(s);
        insertSorted(s, x);
    }
}

int main() {
    stack<int> s;
    s.push(3);
    s.push(1);
    s.push(4);
    s.push(2);
    sortStack(s);
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }
}