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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode*node=head;
        int total=0;
        while(node!=nullptr)
        {
            total++;
            node=node->next;
        }
        if(n==total)
        {
            ListNode*newHead=head->next;
            delete head;
            return newHead;
        }
        int remain=total-n;
        node=head;
        for(int i=1;i<remain;i++){
                node=node->next;
        }
        ListNode*temp=node->next;
        node->next=node->next->next;
        delete temp;
        return head;
        
    }
};