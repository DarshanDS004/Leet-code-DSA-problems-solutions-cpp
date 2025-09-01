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
       map<ListNode*,bool>res;
        ListNode*curr=head;
        while(curr)
        {
            if(res.find(curr)!=res.end())
            {
                return true;
            }
            res[curr]=true;
            curr=curr->next;
        }
        return false;
    }
    

};
*/
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast&&fast->next)
        {
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
            return true;
        }
        return false;
    }
};
