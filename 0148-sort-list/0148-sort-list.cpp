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
    ListNode* sortList(ListNode* head) {
        if(head==nullptr)
        return nullptr;
        vector<int>res;
        ListNode*temp=head;
        while(temp)
        {
            res.push_back(temp->val);
            temp=temp->next;
        }
        sort(res.begin(),res.end());

        ListNode*dummy=new ListNode(0);
        ListNode*curr=dummy;
        for(int i=0;i<res.size();i++)
        {
            curr->next=new ListNode(res[i]);
            curr=curr->next;
        }
        return dummy->next;
    }
};