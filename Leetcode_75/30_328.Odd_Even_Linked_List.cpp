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
        ListNode* oddEvenList(ListNode* head) {
            if (!head) return nullptr;
            ListNode *odd, *even, *evenNextodd;
            odd = head; even = odd->next; evenNextodd = even;
            while (even && even->next){
                odd->next = odd->next->next;
                odd = odd->next;
                even->next = even->next->next;
                even = even->next;
            }
            odd->next = evenNextodd;
            odd = nullptr; even = nullptr; evenNextodd = nullptr;
            delete odd, even, evenNextodd;
            return head;
        }
    };