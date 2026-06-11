/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

 /*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==nullptr && headB==nullptr)
        return nullptr;

        unordered_map<ListNode* ,int>mp;

        ListNode*temp=headA;
        while(temp!=nullptr){
            mp[temp]=temp->val;
            temp=temp->next;

        }
        temp=headB;

        while(temp!=nullptr){
            if(mp.count(temp))
            return temp;

            temp=temp->next;
        }
        return nullptr;
        
    }
};

*/

/*
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==nullptr && headB==nullptr)
        return nullptr;

        ListNode*temp1=headA;
        int n1=0;
        while(temp1!=nullptr){
            n1++;
            temp1=temp1->next;
        }

        int n2=0;
         ListNode*temp2=headB;
        while(temp2!=nullptr){
            n2++;
            temp2=temp2->next;
        }

          temp1=headA;
          temp2=headB;

         int d=abs(n1-n2);
         if(n1>n2){
            while(d--){
                temp1=temp1->next;
            }
        }
        else{
             while(d--){
                temp2=temp2->next;
            }
        }
         while(temp1 && temp2){
            if(temp1==temp2)
            return temp1;
            temp1=temp1->next;
            temp2=temp2->next;
            
         }
         return nullptr;
          
    }

};
*/

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        if(headA==nullptr && headB==nullptr)
        return nullptr;
        
        ListNode*temp1=headA;
        ListNode*temp2=headB;
        
         while( temp1!=temp2){

            temp1=(temp1==nullptr) ? headB:temp1->next;
            temp2=(temp2==nullptr) ? headA:temp2->next;

         }
         return temp1;
    }
};