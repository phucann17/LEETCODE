#include <iostream>
using namespace std;
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
 
class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if (!head) return nullptr;
            ListNode *node = nullptr;
            while (head){
                ListNode* tmp = head->next;
                head->next = node;
                node = head;
                head = tmp;
            }
            return node;
        }
    };