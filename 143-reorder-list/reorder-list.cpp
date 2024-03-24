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
        ListNode *ptr_forward = NULL, *ptr_prev = NULL, *ptr_curr = new_head;
        while(ptr_curr) {
            ptr_forward = ptr_curr->next;
            ptr_curr->next = ptr_prev;
            ptr_prev = ptr_curr;
            ptr_curr = ptr_forward;
        }
        new_head = ptr_prev;
        while(new_head) {
            ListNode *ptr1 = head->next, *ptr2 = new_head->next;
            head->next = new_head;
            new_head->next = ptr1;
            head = ptr1;
            new_head = ptr2;
        }
    }
};