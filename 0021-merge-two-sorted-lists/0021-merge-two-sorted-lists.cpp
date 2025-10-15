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

 //BRUTE FORCE

/*
class Solution {
public:
vector<int>collect_nodes(ListNode*list1,ListNode*list2)
{
    ListNode*temp1=list1;
    ListNode*temp2=list2;
    vector<int>res;
    while(temp1!=nullptr&&temp2!=nullptr)
    {
        int val1=temp1->val;
        int val2=temp2->val;
    
            if(val1<=val2)
            {
                res.push_back(val1);
                temp1=temp1->next;
            }
            else
            {
                  res.push_back(val2);
                  temp2=temp2->next;
            }
            
    }
           while(temp1!=nullptr)
       {
        res.push_back(temp1->val);
        temp1=temp1->next;
       }

      while(temp2!=nullptr)
     {
        res.push_back(temp2->val);
        temp2=temp2->next;
     }

   return res;
 }

ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int>ans=collect_nodes(list1,list2);
        ListNode *node=new ListNode(0);
        ListNode*head=node;
        for(int i=0;i<ans.size();i++)
        {
           node->next= new ListNode(ans[i]);
           node=node->next;
        }
        return head->next;
        
        

        
    }
};
*/

/*
class Solution {
public:
  ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

    ListNode*dummy=new ListNode(0);
    ListNode*tail=dummy;

    while(list1&&list2)
    {
        if(list1->val<=list2->val)
        {
            tail->next=list1;
            list1=list1->next;
        }
        else
        {
            tail->next=list2;
            list2=list2->next;
        }
        tail=tail->next;
    }

    if(list1)
    {
        tail->next=list1;
    }
    else
    {
        tail->next=list2;
    }
   return dummy->next;
 }
  
};

*/

class Solution {
public:
ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
    if(!list1)
    return list2;
    if(!list2)
    return list1;
    if(list1->val<=list2->val)
    {
        list1->next=mergeTwoLists(list1->next,list2);
        return list1;
    }
    else
    {
       list2->next=mergeTwoLists(list2->next,list1); 
       return list2;
    }
 }
};