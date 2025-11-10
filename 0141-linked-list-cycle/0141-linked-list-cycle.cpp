/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        
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