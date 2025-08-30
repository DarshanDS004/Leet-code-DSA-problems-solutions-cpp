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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>res;
        ListNode*node1=list1;
        while(node1!=nullptr)
        {
            res.push_back(node1->val);
            node1=node1->next;
        }
        node1=list2;
        while(node1)
        {
            res.push_back(node1->val);
            node1=node1->next;
        }
        
        sort(res.begin(),res.end());
    ListNode*dummy=new ListNode(0);
    ListNode*curr=dummy;
     
     for(int i:res)
     {
        curr->next=new ListNode(i);
        curr=curr->next;
     }
     return dummy->next;
  }
};