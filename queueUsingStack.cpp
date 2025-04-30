// Implementing a queue using two stacks in C++

#include <iostream>
#include <stack>
using namespace std;

class Queue {
private:
    stack<int> s1, s2;  // 

public:
    void enqueue(int value) {
        s1.push(value);  
    }

    void dequeue() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top()); 
                s1.pop();
            }
        }
        s2.pop(); 
    }

    int front() {
        if (s1.empty() && s2.empty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();  
    }

    bool isEmpty() {
        return (s1.empty() && s2.empty());
    }
};

int main() {
    Queue queue;
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    cout << "Front: " << queue.front() << endl;
    queue.dequeue();
    cout << "Front after dequeue: " << queue.front() << endl;
    return 0;
}