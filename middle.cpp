// Problem: Find the middle node of a singly linked list.


#include <iostream>

using namespace std;

struct ListNode {
    int val;
    ListNode* next;
    ListNode(int x) : val(x), next(nullptr) {}
};

int main() {
    int n;
    cin >> n;
    ListNode* head = nullptr;
    ListNode* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        ListNode* newNode = new ListNode(x);
        if (!head) {
            head = newNode;
            tail = newNode;
        } else {
            tail->next = newNode;
            tail = newNode;
        }
    }
    
    int count = 0;
    ListNode* curr = head;
    while (curr) {
        count++;
        curr = curr->next;
    }
    
    curr = head;
    for (int i = 0; i < count / 2; ++i) {
        curr = curr->next;
    }
    
    cout << curr->val;
    return 0;
}