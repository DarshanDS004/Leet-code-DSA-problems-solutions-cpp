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
   ListNode*merge(ListNode*a,ListNode*b){
     if(a==nullptr)
     return b;

      if(b==nullptr)
      return a;
      ListNode*tail=new ListNode(0);
      ListNode*dummy=tail;

      while(a!=nullptr && b!=nullptr){
             if(a->val>=b->val){
                dummy->next=b;
                b=b->next;
                dummy=dummy->next;
             }
             else{
                dummy->next=a;
                dummy=dummy->next;
                a=a->next;
             } 
      }

      while(a!=nullptr){
        dummy->next=a;
        a=a->next;
        dummy=dummy->next;
      }

      while(b!=nullptr){
        dummy->next=b;
        b=b->next;
        dummy=dummy->next;
      }
      return tail->next;
   }
    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }

        ListNode*prev=nullptr;
         ListNode*slow=head;
          ListNode*fast=head;
          while(fast!=nullptr && fast->next!=nullptr){
            prev=slow;
            slow=slow->next;
            fast=fast->next->next;
          }

          prev->next=nullptr;

          ListNode*left=sortList(head);
          ListNode*right=sortList(slow);

          return merge(left,right);
        
        
    }
};