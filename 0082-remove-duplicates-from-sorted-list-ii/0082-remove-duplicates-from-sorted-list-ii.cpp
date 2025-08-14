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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        return head;
       ListNode*temp=head;
       map< int,int>mp;
       while(temp!=nullptr)
       {
        mp[temp->val]++;
         temp=temp->next;
       }
       ListNode*dummy=new ListNode(0);
       ListNode*curr=dummy;
      
      for(auto [key ,value]:mp)
       {
        if(value==1)
        {
        curr->next=new ListNode(key);
        curr=curr->next;
        }
      
       }
      return dummy->next;
        
    }
};