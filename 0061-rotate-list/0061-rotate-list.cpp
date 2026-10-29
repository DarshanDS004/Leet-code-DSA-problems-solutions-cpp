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
    void rotate(vector<int>&arr,int k){
        reverse(arr.begin(),arr.end());
        reverse(arr.begin(),arr.begin()+k);
        reverse(arr.begin()+k,arr.end());
    }
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr){
            return head;
        }
      
        ListNode*temp=head;

        vector<int>res;
        while(temp){
            res.push_back(temp->val);
            temp=temp->next;
        }
         int n=res.size();
         k=k%n;
        rotate(res,k);
        temp=head;
        for(int i=0;i<res.size();i++){
            temp->val=res[i];
            temp=temp->next;
        }

        return head;
        
    }
};
*/

/*  02
class Solution {
public:
ListNode* rotateRight(ListNode* head, int k) {
        if(head==nullptr||head->next==nullptr||k==0){
            return head;
        }

        ListNode*tail=head;
        int n=1;
        while(tail->next!=nullptr){
            tail=tail->next;
            n++;

        }
         
         k=k%n;
         if(k==0){
            return head;
         }
         tail->next=head;

         ListNode *newtail=head;
         for(int i=0;i<n-k-1;i++){
            newtail=newtail->next;

         }
        ListNode* newHead=newtail->next;
        newtail->next=nullptr;

         
         return newHead;
        
    }
};
*/

/*

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;

        while (k > 0) {
            ListNode* curr = head;

            while (curr->next->next != nullptr)
                curr = curr->next;

            ListNode* last = curr->next;
            curr->next = nullptr;

            last->next = head;
            head = last;

            k--;
        }

        return head;
    }
};

*/

class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr)
            return head;
         int count=1;
         ListNode* temp=head;
         while(temp->next!=nullptr){
            count++;
            temp=temp->next;

         }

         k%=count;

         int len=count-k-1;

          temp->next=head;

           ListNode* new_tail=head;
         while(len--){
            new_tail=new_tail->next;

         }
         ListNode*new_head=new_tail->next;
          new_tail->next=nullptr;

         return new_head;
    }
};
