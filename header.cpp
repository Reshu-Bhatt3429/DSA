#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createHeaderList() {
    Node* head = new Node();
    head->data = -1; // Header node with dummy value
    head->next = nullptr;
    return head;
}

void insertAtEnd(Node* head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void displayList(Node* head) {
    Node* temp = head->next; // Skip the header node
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = createHeaderList();
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    displayList(head);
    return 0;
}