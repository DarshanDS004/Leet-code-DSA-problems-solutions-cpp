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
   ListNode* find_middle(ListNode*node){
    if(node==nullptr ||node->next==nullptr)
    return node;

    ListNode*slow=node;
    ListNode*fast=node;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
   }

   ListNode*reverse(ListNode*node){
    if(node==nullptr ||node->next==nullptr)
    return node;
    ListNode*prev=nullptr;
    ListNode* next=nullptr;
    ListNode*curr=node;

    while(curr!=nullptr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return prev;
   }
    bool isPalindrome(ListNode* head) {
        if(head==nullptr ||head->next==nullptr)
        return true;
        ListNode*first=head;
        ListNode*middle=find_middle(head);
        ListNode*second=reverse(middle->next);

        while(second!=nullptr){
            if(second->val!=first->val)
            return false;

            second=second->next;
            first=first->next;
        }
        return true;
        
    }
};