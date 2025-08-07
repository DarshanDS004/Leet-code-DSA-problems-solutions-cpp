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


 /* BRUTE FORCE
class Solution {
public:
    ListNode* sortList(ListNode* head) {
        vector<int>res;
        if(head==nullptr)
        return nullptr;
        ListNode*temp=head;
        while(temp)
        {
            res.push_back(temp->val);
            temp=temp->next;

        }
        sort(res.begin(),res.end());
        ListNode*dummy =new ListNode(0);
        ListNode *curr=dummy;
  
        for(int i=0;i<res.size();i++)
        {
           
          
            curr->next=new ListNode(res[i]);
            curr=curr->next;

        }
        return dummy->next;



        
    }
};
*/
 class Solution {
public:
  ListNode*merge(ListNode*list1,ListNode*list2)
  {
    ListNode* dummy=new ListNode(0);
    ListNode*curr=dummy;

    while(list1 !=nullptr &&list2!=nullptr)
    {

    if(list1->val<list2->val)
    {
        curr->next=list1;
        list1=list1->next;
       
    }
    else
    {
        curr->next=list2;
        list2=list2->next;
        
    }
     curr=curr->next;
  }

    while(list1!=nullptr)
    {
        curr->next=list1;
        list1=list1->next;
         curr=curr->next;
    }

    while(list2!=nullptr)
    {
        curr->next=list2;
        list2=list2->next;
         curr=curr->next;
    }

    return dummy->next;

  }

  ListNode*midnode(ListNode*head)
  {
    ListNode*slow=head;
    ListNode*fast=head->next;
    while(fast!=nullptr&&fast->next!=nullptr)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;

  }
 

    ListNode* sortList(ListNode* head) {
        if(head==nullptr || head->next==nullptr)
         return head;

        ListNode* mid=midnode(head);
        ListNode*newHead=mid->next;
         mid->next=nullptr;
         ListNode*left=sortList(head);
         ListNode*right=sortList(newHead);
          return merge(left,right);
        
    }
 };
         

        
