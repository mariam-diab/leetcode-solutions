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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
        set<int> nums_set(nums.begin(), nums.end());
        ListNode* current = head, *prev = nullptr;
        while (current != nullptr) {
            if(nums_set.count(current->val)){
                if (prev == nullptr) { 
                    head = current->next;
                    current = head; }
                else {
                    prev->next = current->next;
                    current = prev->next; }
            }
            else{ 
                prev = current;
                current = current->next;
            }
        }
        return head;

        
    }
};