/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (!head || !head->next)
         return false;
        vector<ListNode*>arr;
        ListNode*curr=head;
        int i=0;
        while(curr)
        {
            for(ListNode* node:arr)
            {
                if(node==curr)
                return true;
            }
            arr.push_back(curr);
            curr=curr->next;
        }
        return false;
      
        
    }
};
*/

/*
class Solution {
public:
    bool hasCycle(ListNode *head) {
    if (!head || !head->next) 
    return false;
    unordered_set<ListNode*>seen;
    ListNode*curr=head;
    while(curr)
    {
        if(seen.count(curr))
        return true;

        seen.insert(curr);
        curr=curr->next;
    }
        return false;
  }
};

*/


class Solution {
public:
    bool hasCycle(ListNode *head) {
    if (!head || !head->next) 
    return false;
    
    ListNode*slow=head;
    ListNode*fast=head;
    while(fast &&fast->next)
    {
        
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        return true;
    }
    return false;
    }
};