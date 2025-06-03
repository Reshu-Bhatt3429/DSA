#include <iostream>  
#include <vector>  
#include <queue>  
using namespace std;  

struct ListNode {  
    int val;  
    ListNode* next;  
    ListNode(int x) : val(x), next(nullptr) {}  
};  

struct Compare {  
    bool operator()(ListNode* a, ListNode* b) {  
        return a->val > b->val;  
    }  
};  

ListNode* mergeKLists(vector<ListNode*>& lists) {  
    priority_queue<ListNode*, vector<ListNode*>, Compare> pq;  
    for(ListNode* list : lists)  
        if(list) pq.push(list);  

    ListNode dummy(0);  
    ListNode* curr = &dummy;  
    while(!pq.empty()) {  
        ListNode* node = pq.top(); pq.pop();  
        curr->next = node;  
        curr = curr->next;  
        if(node->next) pq.push(node->next);  
    }  
    return dummy.next;  
}  

int main() {  
    ListNode* l1 = new ListNode(1);  
    l1->next = new ListNode(4);  
    l1->next->next = new ListNode(5);  

    ListNode* l2 = new ListNode(1);  
    l2->next = new ListNode(3);  
    l2->next->next = new ListNode(4);  

    vector<ListNode*> lists = {l1, l2};  
    ListNode* result = mergeKLists(lists);  

    while(result) {  
        cout << result->val << " ";  
        result = result->next;  
    }  
    return 0;  
}