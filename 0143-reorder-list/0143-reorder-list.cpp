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
    void reorderList(ListNode* head) {
      if(head==nullptr ||head->next==nullptr)
      return;

      vector<ListNode*>arr;
      ListNode*temp=head;
      while(temp){
        arr.push_back(temp);
        temp=temp->next;
      }
        int n=arr.size();
        int i=0;
        int j=n-1;
        ListNode*prev=nullptr;
        while(i<j){
          
          arr[i]->next=arr[j];
          i++;

          if(i>=j)
          break;

          arr[j]->next=arr[i];
          j--;
        }
        arr[i]->next=nullptr;
    
    }
};
*/

ListNode* middle(ListNode*head){
    if(head==nullptr||head->next==nullptr)
    return head;

    ListNode*slow=head;
    ListNode*fast=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}

ListNode*reverse(ListNode*head){
    if(head==nullptr||head->next==nullptr){
        return head;
    }
     
       ListNode*curr=head;
       ListNode*prev=nullptr;
       ListNode*next=nullptr;

       while(curr){
         next=curr->next;
         curr->next=prev;
         prev=curr;
         curr=next;

       }
       return prev;

}



class Solution {
public:
    void reorderList(ListNode* head) {
      if(head==nullptr ||head->next==nullptr)
      return;

      ListNode*mid=middle(head);
      ListNode*second=reverse(mid->next);
      mid->next=nullptr;


      ListNode*first=head;

      while(second){

      ListNode*temp1=first->next;
      ListNode*temp2=second->next;

      first->next=second;
      second->next=temp1;

      first=temp1;
      second=temp2;
      }
    }
};