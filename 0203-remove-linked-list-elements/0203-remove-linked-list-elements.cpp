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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode *dummy=new ListNode(0);
        dummy->next=head;
        ListNode*prev=dummy;
        ListNode*curr=head;

        while(curr!=nullptr){
         if(curr->val==val){
            prev->next=curr->next;
            ListNode *temp=curr;
            curr=curr->next;
            delete temp;
         }
         else{
            prev=curr;
            curr=curr->next;
         }

        }
        return dummy->next;
        
    }
};

*/

class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {

        while(head!=nullptr && head->val==val){
            ListNode*temp=head;
            head=head->next;
            delete temp;
        }

        ListNode *curr=head;
        while(curr!=nullptr &&curr->next!=nullptr){
            if(curr->next->val==val)
            {
                ListNode* node=curr->next;
                curr->next=curr->next->next;
                delete node;
            }
            else{
               curr=curr->next;
            }
        }
        return head;
    }
};