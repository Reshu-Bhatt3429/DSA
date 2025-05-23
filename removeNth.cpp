#include <iostream>  
using namespace std;  

struct ListNode {  
    int val;  
    ListNode* next;  
    ListNode(int x) : val(x), next(nullptr) {}  
};  

ListNode* removeNthFromEnd(ListNode* head, int n) {  
    ListNode dummy(0);  
    dummy.next = head;  
    ListNode *fast = &dummy, *slow = &dummy;  

    for (int i = 0; i <= n; i++) {  
        fast = fast->next;  
    }  

    while (fast) {  
        fast = fast->next;  
        slow = slow->next;  
    }  

    ListNode* to_delete = slow->next;  
    slow->next = slow->next->next;  
    delete to_delete;  

    return dummy.next;  
}  

void printList(ListNode* head) {  
    while (head) {  
        cout << head->val << " ";  
        head = head->next;  
    }  
}  

int main() {  
    ListNode* head = new ListNode(1);  
    head->next = new ListNode(2);  
    head->next->next = new ListNode(3);  
    head->next->next->next = new ListNode(4);  

    ListNode* result = removeNthFromEnd(head, 2);  
    printList(result);  
    return 0;  
}