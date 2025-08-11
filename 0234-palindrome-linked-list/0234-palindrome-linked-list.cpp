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
    bool isPalindrome(ListNode* head) {
        string  res;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            res+=to_string(temp->val);
            temp=temp->next;

        }
      int  n=res.size();
      int low=0,high=n-1;
      while(low<=high)
      {
        if(res[low]!=res[high])
        return false;
        low++;
        high--;

      }
      return true;

        
    }
};
*/
/*
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int>res;
        ListNode*temp=head;
        while(temp!=nullptr)
        {
            res.push_back(temp->val);
            temp=temp->next;

        }
      int  n=res.size();
      int low=0,high=n-1;
      while(low<=high)
      {
        if(res[low]!=res[high])
        return false;
        low++;
        high--;

      }
      return true;

        
    }
};
*/
/*
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head->next==nullptr)
        return true;
        vector<int>res;
        ListNode*slow=head;
         ListNode*first=head;
          ListNode*fast=head;
          while(fast&&fast->next)
          {
            slow=slow->next;
            fast=fast->next->next;
          }
          ListNode* second=slow;
          ListNode*prev=NULL,*curr=second,*next;
          while(curr)
          {
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
          }
          ListNode *rev=prev;
          while(rev&&head)
          {
            if(rev->val!=first->val)
            return false;
            rev=rev->next;
            first=first->next;
          }
          return true;
    }
};
*/

class Solution {
public:

    ListNode* reverse(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* prev = nullptr;
        ListNode* next = nullptr;
        ListNode* curr = head;
        while(curr != nullptr)
        {
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode* middle(ListNode* head)
    {
        if(head == nullptr || head->next == nullptr)
            return head;
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }

    bool isPalindrome(ListNode *head)
    {
        if(head == nullptr || head->next == nullptr)
            return true;

        ListNode* mid = middle(head);
        ListNode* secondHalf = mid->next;
        mid->next = nullptr;          // Break the list

        ListNode* revmid = reverse(secondHalf);

        ListNode* firstHalf = head;

        while(revmid != nullptr)
        {
            if(firstHalf->val != revmid->val)
                return false;
            firstHalf = firstHalf->next;
            revmid = revmid->next;
        }

        return true;
    }
};



      