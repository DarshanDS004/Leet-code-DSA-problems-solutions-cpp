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
    ListNode* deleteMiddle(ListNode* head) {
         if(head == nullptr || head->next == nullptr)
            return nullptr;
        ListNode* temp=head;
        int n=1;
        while(temp->next!=nullptr){
            temp=temp->next;
            n++;

        }

        int mid=n/2;
        temp=head;

        for(int i=0;i<mid-1;i++){
           temp=temp->next;
        }

        ListNode* pos=temp->next;
        temp->next=pos->next;
        delete pos;

      return head;
    }
};