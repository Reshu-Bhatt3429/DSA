// Implementing a stack using two queues in C++

#include <iostream>
#include <queue>
using namespace std;

class Stack {
private:
    queue<int> q1, q2;  

public:
    void push(int value) {
        q2.push(value);  
        while (!q1.empty()) {
            q2.push(q1.front());  
            q1.pop();
        }
        swap(q1, q2); 
    }

    void pop() {
        if (q1.empty()) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        q1.pop();  
    }

    int top() {
        if (q1.empty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return q1.front();  
    }

    bool isEmpty() {
        return q1.empty();  
    }
};

int main() {
    Stack stack;
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top: " << stack.top() << endl;
    stack.pop();
    cout << "Top after pop: " << stack.top() << endl;
    return 0;
}