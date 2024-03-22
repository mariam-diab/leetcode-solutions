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
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
auto __untie_cin = cin.tie(nullptr);
auto __unsync_ios_stdio = ios_base::sync_with_stdio(false);

class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode *temp = head; 
        ListNode *mid = head;
        while(temp!=NULL && temp->next!=NULL){
            temp = temp->next->next;
            mid=mid->next;
        }
        
        ListNode* pre = NULL;
        ListNode* cur = mid;
        while (cur != NULL) {
            ListNode* next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }

        while (pre != NULL) {
            if (head->val != pre->val) {
                return false; 
            }
            head = head->next;
            pre = pre->next;
        }
        
        return true;
    }
        
};