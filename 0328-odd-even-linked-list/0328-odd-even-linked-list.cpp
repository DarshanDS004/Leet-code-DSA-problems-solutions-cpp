/*
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return head;

        vector<int> arr;

        ListNode* temp = head;
        int index = 1;

        
        while (temp != nullptr) {
            if (index % 2 != 0) {
                arr.push_back(temp->val);
            }
            temp = temp->next;
            index++;
        }

     
        temp = head;
        index = 1;
        while (temp != nullptr) {
            if (index % 2 == 0) {
                arr.push_back(temp->val);
            }
            temp = temp->next;
            index++;
        }

        temp = head;
        int i = 0;
        while (temp != nullptr) {
            temp->val = arr[i++];
            temp = temp->next;
        }

        return head;
    }
};
*/

class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr) return head;
        ListNode*temp=head;
        ListNode*odd=head;
        ListNode*even=head->next;
        ListNode*evenhead=even;

        while(even!=nullptr &&even->next!=nullptr)
        {
            odd->next=even->next;
            odd=odd->next;
            even->next=odd->next;
            even=even->next;
        }
        
        odd->next=evenhead;
        return head;
    }
};
