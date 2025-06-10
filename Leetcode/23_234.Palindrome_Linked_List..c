#include <stdio.h>
#include <stdbool.h>
 struct ListNode {
      int val;
      struct ListNode *next;
  };
 
struct ListNode* copyList(struct ListNode* head) {
    if (!head) return NULL;

    struct ListNode* newHead = (struct ListNode*)malloc(sizeof(struct ListNode));
    newHead->val = head->val;
    newHead->next = NULL;

    struct ListNode* curr = newHead;
    struct ListNode* tmp = head->next;

    while (tmp) {
        struct ListNode* newNode = (struct ListNode*)malloc(sizeof(struct ListNode));
        newNode->val = tmp->val;
        newNode->next = NULL;

        curr->next = newNode;
        curr = newNode;
        tmp = tmp->next;
    }

    return newHead;
}

bool isPalindrome(struct ListNode* head) {
    struct ListNode* copy = copyList(head);
    struct ListNode* pre = NULL;
    struct ListNode* curr = copy;
    while (curr) {
        struct ListNode* nextptr = curr->next;
        curr->next = pre;
        pre = curr;
        curr = nextptr;
    }

    while (pre) {
        if (pre->val != head->val) return false;
        pre = pre->next;
        head = head->next;
    }
    return true;
}