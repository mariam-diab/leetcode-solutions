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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* last_node = list2, *prev = list1;
        b = b - a;
        while (last_node->next != nullptr) last_node = last_node->next;
        while(a-- > 1) prev = prev->next;
        ListNode *current = prev->next;
        prev->next = list2;
        while(b--) current = current->next;
        last_node->next = current->next;
        return list1;
    }
};