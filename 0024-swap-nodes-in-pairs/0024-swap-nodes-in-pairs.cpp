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
  vector<int>collect(ListNode*head)
  {
    vector<int>res;
    ListNode*temp=head;
    while(temp)
    {
        res.push_back(temp->val);
        temp=temp->next;
    }
    return res;
  }
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        return head;
        vector<int>res=collect(head);
        int j=0;
        for(int i=0;i<res.size()&&j<res.size()-1;i+=2)
        {
            reverse(res.begin()+j,res.begin()+j+2);
            j+=2;
        }
       
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