/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 
class Solution {
public:
    void reorderList(ListNode* head) {
        ListNode *ptr_slow = head, *ptr_fast = head->next;
        while(ptr_fast && ptr_fast->next) {
            ptr_slow = ptr_slow->next;
            ptr_fast = ptr_fast->next->next;
        }
        ListNode *new_head = ptr_slow->next;
        ptr_slow->next = NULL;
        ListNode* pre = NULL, *cur = new_head;
        while (cur != NULL) {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        new_head = pre;
        while(new_head) {
            ListNode *ptr1 = head->next, *ptr2 = new_head->next;
            head->next = new_head;
            new_head->next = ptr1;
            head = ptr1;
            new_head = ptr2;
        }
    }
};