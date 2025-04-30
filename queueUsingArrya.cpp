// Implementing a queue using arrays in C++

#include <iostream>
using namespace std;

class Queue {
private:
    int* arr;         
    int capacity;     
    int frontIndex;   
    int rearIndex;    
    int size;        

public:
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        frontIndex = 0;
        rearIndex = -1;
        this->size = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int value) {
        if (size == capacity) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        rearIndex = (rearIndex + 1) % capacity;
        arr[rearIndex] = value;
        size++;
    }

    void dequeue() {
        if (size == 0) {
            cout << "Queue Underflow!" << endl;
            return;
        }
        frontIndex = (frontIndex + 1) % capacity;  
        size--;
    }

    int front() {
        if (size == 0) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[frontIndex];
    }

    bool isEmpty() {
        return (size == 0);
    }
};

int main() {
    Queue queue(5);
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    cout << "Front: " << queue.front() << endl;
    queue.dequeue();
    cout << "Front after dequeue: " << queue.front() << endl;
    return 0;
}