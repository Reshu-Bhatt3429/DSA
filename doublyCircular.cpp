#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node* prev;
};

Node* createNode(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = newNode;
    newNode->prev = newNode;
    return newNode;
}

void insertAtEnd(Node*& head, int value) {
    Node* newNode = createNode(value);
    if (head == NULL) {
        head = newNode;
        return;
    }
    Node* last = head->prev;
    newNode->next = head;
    newNode->prev = last;
    last->next = newNode;
    head->prev = newNode;
}

void deleteNode(Node*& head, int key) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* current = head;
    while (current->data != key) {
        current = current->next;
        if (current == head) {
            cout << "Element not found" << endl;
            return;
        }
    }
    if (current->next == current) {
        head = NULL;
        delete current;
        return;
    }
    current->prev->next = current->next;
    current->next->prev = current->prev;
    if (current == head) {
        head = head->next;
    }
    delete current;
}

void displayForward(Node* head) {
    if (head == NULL) {
        cout << "List is empty" << endl;
        return;
    }
    Node* temp = head;
    do {
        cout << temp->data << " ";
        temp = temp->next;
    } while (temp != head);
    cout << endl;
}

int main() {
    Node* head = NULL;
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    cout << "Before deletion: ";
    displayForward(head);
    deleteNode(head, 20);
    cout << "After deletion: ";
    displayForward(head);
    return 0;
}