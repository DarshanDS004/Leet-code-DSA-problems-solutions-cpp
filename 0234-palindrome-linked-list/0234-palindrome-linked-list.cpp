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

  ListNode*middle(ListNode*head){
    if(head==nullptr|| head->next==nullptr){
        return head;
    }
    ListNode*slow=head;
    ListNode*fast=head;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

  }

  ListNode*reverse(ListNode*head){
    if(head==nullptr||head->next==nullptr)
    return head;
  
   ListNode*curr=head;
   ListNode*prev=nullptr;
   ListNode*next=head;
   while(curr){
    next=curr->next;
    curr->next=prev;
    prev=curr;
    curr=next;
   }
   return prev;
  }

    bool isPalindrome(ListNode* head) {

        if(head==nullptr)
        return true;
        if(head->next==nullptr)
        return true;
        ListNode*first=head;
        ListNode *mid=middle(head);
        ListNode*second=reverse(mid->next);

        while( second!=nullptr){
            if(first->val!=second->val){
                return false;
            }
            first=first->next;
            second=second->next;
        }
      return true;
        
    }
};