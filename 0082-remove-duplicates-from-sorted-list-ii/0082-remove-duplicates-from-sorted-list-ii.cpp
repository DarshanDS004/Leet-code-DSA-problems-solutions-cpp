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

 // BRUTE FORCE
 /*
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==nullptr||head->next==nullptr)
        return head;
       ListNode*temp=head;
       map< int,int>mp;
       while(temp!=nullptr)
       {
        mp[temp->val]++;
         temp=temp->next;
       }
       ListNode*dummy=new ListNode(0);
       ListNode*curr=dummy;
      
      for(auto [key ,value]:mp)
       {
        if(value==1)
        {
        curr->next=new ListNode(key);
        curr=curr->next;
        }
      
       }
      return dummy->next;
        
    }
};
*/


class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next)
            return head;

        map<int, pair<int, ListNode*>> mp;
        ListNode* temp = head;

        // First pass: count occurrences
        while (temp) {
            mp[temp->val].first++;
            mp[temp->val].second = temp;
            temp = temp->next;
        }

        // Second pass: build new list with only values that appeared once
        ListNode dummy(0);
        ListNode* res = &dummy;
        temp = head;

        while (temp) {
            if (mp[temp->val].first == 1) {
                res->next = temp;
                res = res->next;
            }
            temp = temp->next;
        }

        res->next = nullptr;
        return dummy.next;
    }
};



