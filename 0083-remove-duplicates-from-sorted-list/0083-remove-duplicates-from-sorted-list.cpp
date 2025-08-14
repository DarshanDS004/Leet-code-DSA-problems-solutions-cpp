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
        ListNode*res=head;
        map<int,ListNode*>mp;
        mp[temp->val]=temp;
        temp=temp->next;
        while(temp!=nullptr)
        {
            if(mp.find(temp->val)==mp.end())
            {
              mp[temp->val]=temp;
              res->next=temp;
              res=res->next;

            }
            temp=temp->next;
        }
        res->next=nullptr;
        return head;
    
        
    }
};