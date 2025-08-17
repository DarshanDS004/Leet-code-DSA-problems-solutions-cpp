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
vector<int>rev(vector<int>res,int k)
{  
    int n=res.size();
     for (int i = 0; i + k <= n; i += k) {
            reverse(res.begin() + i, res.begin() + i + k);
     }
    return res;
}

vector<int> count(ListNode*head)
{
 ListNode*temp=head;
 vector<int>res;
 while(temp!=nullptr)
 {
   res.push_back(temp->val);
   temp=temp->next;
 }
 return res;
}

    ListNode* reverseKGroup(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr)
        return head;
        ListNode*temp=head;
        vector<int>nodes=count(temp);
        vector<int>r=rev(nodes,k);
        ListNode*dummy=new ListNode(0);
         ListNode*curr=dummy;
         for(int i=0;i<r.size();i++)
         {
            curr->next=new ListNode(r[i]);
            curr=curr->next;
         }
      return dummy->next;
    }

      
};