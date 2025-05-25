#include <iostream>
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
    public:
        ListNode* deleteMiddle(ListNode* head) {
            if (!head || !head->next) return nullptr;
            int sz = 0;
            ListNode* tmp = head;
            while (tmp){
                sz++;
                tmp = tmp->next;
            }
            tmp = head;
            int mid = 0;
            while (mid < sz/2 - 1){
                mid++;
                tmp = tmp->next;
            }
            ListNode* delNode = tmp->next;
            tmp->next = tmp->next->next;
            tmp = nullptr;
            delete(delNode);
            delete(tmp);
            return head; 
        }
    };