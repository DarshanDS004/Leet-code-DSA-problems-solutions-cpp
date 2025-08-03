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
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next)
            return nullptr;

        int total = 0;
        ListNode* node = head;
        while (node) {
            total++;
            node = node->next;
        }

        int middle = total / 2;
        node = head;

        for (int i = 0; i < middle - 1; ++i) {
            node = node->next;
        }

        // Just skip the middle node; don't manually delete
        node->next = node->next->next;

        return head;
    }
};
