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
 ListNode*reverse(ListNode*head)
 {  
    if(head==nullptr||head->next==nullptr)
    return head;
    ListNode*temp=head,*prev=nullptr,*next=nullptr;

    while(temp!=nullptr)
    {
        next=temp->next;
       temp->next=prev;
       prev=temp;
       temp=next;

    }
    return prev;

 }

 ListNode* find_pos(ListNode*head,int l,int r)
 {  
    if(l==1&&r==1)
    return head;
    ListNode*temp=head;
    ListNode*prev=nullptr;
    for(int i=0;i<l-1;i++)
    {    prev=temp;
        temp=temp->next;
    }
    ListNode*first=temp;
    temp=head;
    for(int i=0;i<r-1;i++)
    {
        temp=temp->next;
    }
     ListNode*last=temp;
     ListNode*link=last->next;
     last->next=nullptr;
     ListNode*first_link=reverse(first);
     prev->next=first_link;
     first->next=link;
     //last->next = nullptr;
     return head;

 }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head==nullptr||head->next==nullptr)
        return head;
        return find_pos(head,left,right);

        
    }
};
*/

class Solution {
public:
    ListNode* reverse(ListNode* head) {
        ListNode* temp = head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;

        while (temp != nullptr) {
            next = temp->next;
            temp->next = prev;
            prev = temp;
            temp = next;
        }
        return prev;
    }

    ListNode* find_pos(ListNode* head, int l, int r) {
        if (l == r) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        // Move prev to node before position l
        for (int i = 1; i < l; i++) {
            prev = prev->next;
        }

        // Move curr to position l
        ListNode* first = prev->next;
        ListNode* last = first;
        for (int i = l; i < r; i++) {
            last = last->next;
        }

        // Cut the sublist
        ListNode* link = last->next;
        last->next = nullptr;

        // Reverse the sublist
        ListNode* first_link = reverse(first);

        // Reconnect
        prev->next = first_link;
        first->next = link;

        return dummy.next;  // important: return dummy.next (handles l=1 case)
    }

    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || head->next == nullptr || left == right) return head;
        return find_pos(head, left, right);
    }
};
