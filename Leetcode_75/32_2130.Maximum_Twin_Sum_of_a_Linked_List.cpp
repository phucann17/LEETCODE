#include <iostream>
#include <vector>
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
        int pairSum(ListNode* head) {
            if (!head) return 0;
            vector<int> res;
            int sz = 0;
            int maxVal = 0;
            while (head){
                sz++;
                res.push_back(head->val);
                head = head->next;
            }
            for (int i = 0; i < sz/2; i++){
                int sum = res[i] + res[sz - 1 -i];
                maxVal = max(maxVal, sum);
            }
            return maxVal;
        }
    };