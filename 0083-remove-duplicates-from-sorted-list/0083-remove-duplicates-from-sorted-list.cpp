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
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *temp=head;
        while(temp!=nullptr){

            ListNode*curr=temp;
            ListNode *prev=curr;
            ListNode*runner=curr->next;

            while(runner!=nullptr){
                if(curr->val==runner->val){
                    prev->next=runner->next;
                    delete runner;
                    runner=prev->next;
                }
                else{
                    prev=runner;
                    runner=runner->next;
                }

            }

            temp=temp->next;
        }
        return head;
        
    }
};