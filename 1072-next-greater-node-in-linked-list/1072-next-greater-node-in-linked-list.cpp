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

  vector<int>collect_nodes(ListNode*head)
{

     if(head==nullptr)
        return{};
        if(head->next==nullptr)
        return {-1};
        ListNode*curr=head;
        vector<int>res;
        while(curr!=nullptr)
        {
            res.push_back(curr->val);
            curr=curr->next;

        }
        return res;
}
    vector<int> nextLargerNodes(ListNode* head) {
        
        vector<int>ans=collect_nodes(head);
        int n=ans.size();
        vector<int>res(n,0);
        stack<int>st;
        for(int i=n-1;i>=0;i--)
        {
            while(!st.empty()&&ans[i]>=st.top())
            {
                st.pop();
            }
            if(!st.empty())
            {
              res[i]=st.top();
            }
          st.push(ans[i]);
        }
        return res;
        
    }
};


/*
class Solution {
public:
 vector<int> nextLargerNodes(ListNode* head) {
  
  ListNode*curr=head;
  int n;
    while(curr!=nullptr)
   {
    n++;
    curr=curr->next;
   }
   vector<int>res(n,0);
   stack<pair<ListNode*,int>>st;
   curr=head;
   while(curr!=nullptr)
   {
    
   }



 }
};

*/