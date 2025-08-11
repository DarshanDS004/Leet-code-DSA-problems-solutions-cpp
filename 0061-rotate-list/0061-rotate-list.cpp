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


 //Brute force
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr)
        return head;
        vector<int>res;
        ListNode*curr=head;
        int count=0;
        while(curr!=nullptr)
        {
            res.push_back(curr->val);
            curr=curr->next;
            count++;

        }
        k=k%count;
        reverse(res.begin(),res.end());
        reverse(res.begin(),res.begin()+k);
        reverse(res.begin()+k,res.end());
        ListNode*dummy=new ListNode(0);
        ListNode*temp=dummy;
        for(int i=0;i<res.size();i++)
        {
            ListNode* node=new ListNode(res[i]);
            temp->next=node;
            temp=temp->next;
        }
        return dummy->next;
        
    }
};




/*
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        
    }
};
*/
