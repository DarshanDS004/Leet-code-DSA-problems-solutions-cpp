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

 /*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        return head;
        ListNode*temp=head;
        ListNode*res=head;
        map<int,ListNode*>mp;
        mp[temp->val]=temp;
        temp=temp->next;
        while(temp!=nullptr)
        {
            if(mp.find(temp->val)==mp.end())
            {
              mp[temp->val]=temp;
              res->next=temp;
              res=res->next;

            }
            temp=temp->next;
        }
        res->next=nullptr;
        return head;
    
        
    }
};
*/

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
 /*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        return head;
        ListNode*temp=head;
        ListNode*res=head;
        map<int,pair<int,ListNode*>>mp;
        mp[temp->val].first++;
        mp[temp->val].second=temp;
        temp=temp->next;
        while(temp!=nullptr)
        {
            if(mp[temp->val].first>=1)
            {
             
              res->next=mp[temp->val].second;
              res=res->next;
              temp=temp->next;

            }
             mp[temp->val].first++;
             mp[temp->val].second=temp;
            //temp=temp->next;
        }
        res->next=nullptr;
        return head;
    
        
    }
};

*/

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head) return head;

        map<int, bool> seen;
        ListNode* curr = head;
        seen[curr->val] = true;

        while (curr->next) {
            if (seen[curr->next->val]) {
                // Duplicate -> skip it
                curr->next = curr->next->next;
            } else {
                seen[curr->next->val] = true;
                curr = curr->next;
            }
        }
        return head;
    }
};
