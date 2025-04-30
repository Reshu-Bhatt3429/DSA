// Implementing a stack using arrays in C++

#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;          
    int capacity;    
    int topIndex;     

public:
    Stack(int size) {
        arr = new int[size];  
        capacity = size;
        topIndex = -1;       
    }

    ~Stack() {
        delete[] arr;        
    }

    void push(int value) {
        if (topIndex == capacity - 1) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++topIndex] = value;  
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow!" << endl;
            return;
        }
        --topIndex; 
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[topIndex];  
    }

    bool isEmpty() {
        return (topIndex == -1);  
    }
};

int main() {
    Stack stack(5);
    stack.push(10);
    stack.push(20);
    stack.push(30);
    cout << "Top: " << stack.top() << endl;
    stack.pop();
    cout << "Top after pop: " << stack.top() << endl;
    return 0;
}