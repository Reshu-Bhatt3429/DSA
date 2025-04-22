#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* npx; // XOR of prev and next pointers
};

Node* XOR(Node* a, Node* b) {
    return reinterpret_cast<Node*>(reinterpret_cast<uintptr_t>(a) ^ reinterpret_cast<uintptr_t>(b));
}

void insert(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;

    newNode->npx = head; // XOR of NULL and head
    if (head != nullptr) {
        head->npx = XOR(newNode, XOR(head->npx, nullptr)); // Update head's npx
    }
    head = newNode;
}

void displayList(Node* head) {
    Node* curr = head;
    Node* prev = nullptr;
    Node* next;

    while (curr != nullptr) {
        cout << curr->data << " ";
        next = XOR(prev, curr->npx); // Calculate next node
        prev = curr;
        curr = next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    insert(head, 10);
    insert(head, 20);
    insert(head, 30);
    displayList(head);
    return 0;
}