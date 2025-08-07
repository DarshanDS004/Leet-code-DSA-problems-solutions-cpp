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
    ListNode* deleteMiddle(ListNode* head) {
        ListNode*curr=head;
      
        int count=0;
        while(curr!=nullptr)
        {
            count++;
            curr=curr->next;

        }
        int mid=count/2;
        curr=head;
       curr = head;
       
        for (int i = 0; i < mid - 1; i++) {
            curr = curr->next;
        }
        
            ListNode*middle=curr->next;
            middle->next=curr->next->next;
            delete middle;
            return head;

        
    }
};
*/

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (!head || !head->next) {
            return nullptr;
        }

        ListNode* curr = head;
        int count = 0;

        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }

        int mid = count / 2;
        curr = head;
        for (int i = 0; i < mid - 1; i++) {
            curr = curr->next;
        }

        ListNode* middle = curr->next;
        curr->next = curr->next->next;
        delete middle;

        return head;
    }
};
