#include <iostream>
using namespace std;

struct DNode {
    int data;
    DNode* prev;
    DNode* next;
};

DNode* head = nullptr;

void insertAtEnd(int value) {
    DNode* newNode = new DNode();
    newNode->data = value;
    newNode->prev = nullptr;
    newNode->next = nullptr;
    if (head == nullptr) {
        head = newNode;
    } else {
        DNode* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
        newNode->prev = temp;
    }
}

void displayList() {
    DNode* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    insertAtEnd(5);
    insertAtEnd(15);
    insertAtEnd(25);
    displayList();
    return 0;
}