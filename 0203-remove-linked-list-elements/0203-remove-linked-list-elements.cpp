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
    ListNode* removeElements(ListNode* head, int val) {
    ListNode*temp=head;
    vector<int>res;
    while(temp!=nullptr)
    {
        if(temp->val!=val)
        {
            res.push_back(temp->val);
        }
            temp=temp->next;

        
    }

    ListNode* new_head=new ListNode(0);
    ListNode*node=new_head;
    for(int i=0;i<res.size();i++)
    {
        new_head->next=new ListNode(res[i]);
        new_head=new_head->next;
    }
    return node->next;
        
    }
};