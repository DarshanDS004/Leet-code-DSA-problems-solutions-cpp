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
        unordered_map<ListNode*,int>mp;
        ListNode*temp=head;
        while(temp){
            if(mp.count(temp)){
                return true;
            }
            mp[temp]=temp->val;
            temp=temp->next;
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
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;

            if(slow==fast)
            return true;
        }
    
    return false;
    }

};
      