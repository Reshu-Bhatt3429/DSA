
// Problem: Reverse a singly linked list.

#include <iostream>
#include <stack>

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
    
    stack<int> st;
    ListNode* curr = head;
    while (curr) {
        st.push(curr->val);
        curr = curr->next;
    }
    
    curr = head;
    while (!st.empty()) {
        curr->val = st.top();
        st.pop();
        curr = curr->next;
    }
    
    curr = head;
    while (curr) {
        cout << curr->val << " ";
        curr = curr->next;
    }
    return 0;
}