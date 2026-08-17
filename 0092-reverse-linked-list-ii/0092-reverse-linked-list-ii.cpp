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
/*
      ListNode*reverse(ListNode *head){
        if(head==nullptr ||head->next==nullptr)
        return head;

        ListNode*curr=head;
        ListNode* prev=nullptr;
        ListNode*next=nullptr;

        while(curr){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
      }
*/
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if(head==nullptr|| head->next==nullptr|| left==right)
        return head;

        ListNode* curr=head;
        for(int i=1;i<left;i++){
            curr=curr->next;
        }
         vector<int>ans;

         ListNode*temp=curr;

         for(int i=left;i<=right;i++){
            ans.push_back(temp->val);
            temp=temp->next;
         }
       reverse(ans.begin(), ans.end());
        temp=curr;

        for(int i=0;i<ans.size();i++){
            temp->val=ans[i];
            temp=temp->next;
        }
        return head;
    }
};






        

