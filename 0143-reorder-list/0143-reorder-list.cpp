class Solution {
public:

ListNode* middle(ListNode* head){
    ListNode *slow=head;
    ListNode *fast=head;

    while(fast->next && fast->next->next){
        slow=slow->next;
        fast=fast->next->next;
    }

    return slow;
}

ListNode* reverse(ListNode *head)
{
    ListNode *prev=nullptr;
    ListNode *curr=head;
    ListNode *next=nullptr;

    while(curr){
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }

    return prev;
}

void reorderList(ListNode* head) {

    if(!head || !head->next)
        return;

    ListNode *first=head;

    ListNode *second=middle(head);

    ListNode *third=reverse(second->next);

    second->next=NULL;

    while(third){

        ListNode* temp1=first->next;
        ListNode* temp2=third->next;

        first->next=third;
        third->next=temp1;

        first=temp1;
        third=temp2;
    }
}
};