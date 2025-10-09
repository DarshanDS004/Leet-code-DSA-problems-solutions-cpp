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
vector<int>collect(ListNode* head)
{   
    vector<int>res;
    ListNode* temp=head;
    while(temp!=nullptr)
    {  
        if (res.empty() || temp->val != res.back())
        res.push_back(temp->val);
        temp=temp->next;
    }
    return res;
}
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head)
        return head;
        vector<int>res=collect(head);
        ListNode* node=new ListNode(0);
        ListNode* ans=node;
        for(int i=0;i<res.size();i++)
        {
           node->next= new ListNode(res[i]);
           node=node->next;
        }
        return ans->next;

        
    }
};