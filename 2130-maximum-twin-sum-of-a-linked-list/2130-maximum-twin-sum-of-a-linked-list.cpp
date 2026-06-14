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

/*
 class Solution {
public:
    int pairSum(ListNode* head) {
        if(head==nullptr && head->next==nullptr)
        return 0;

        vector<int>res;
        ListNode*temp=head;
        while(temp!=nullptr){
            res.push_back(temp->val);
            temp=temp->next;
        }
        int sum=0;
        int max_sum=0;
        int n=res.size();
      for(int i=0;i<=n/2;i++){
        sum=res[i]+res[n-1-i];
        max_sum=max(max_sum,sum);
      } 
     return max_sum;
        
    }
};
*/

class Solution {
public:

   ListNode*reverse(ListNode*head){
    if(head==nullptr ||head->next==nullptr){
        return head;
    }

    ListNode*curr=head;
    ListNode*prev=nullptr;
    ListNode*next=nullptr;
    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
   return prev;
   }

   ListNode* middle(ListNode*head){
     if(head==nullptr ||head->next ==nullptr)
     return head;
    
    ListNode*slow=head;
    ListNode*fast=head;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
 }
    int pairSum(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return 0;
        }
        ListNode*first=head;
        ListNode*mid=middle(head);
        ListNode*second=reverse(mid->next);
        int sum=0;
        int max_sum=0;

        while(first && second){
            sum=first->val+second->val;
            max_sum=max(max_sum,sum);

            first=first->next;
            second=second->next;
        }
        return max_sum;
    }
};